#include "header/fasgame.h"
#include "header/ordergenerator.h"

#include <QDebug>

FASGame::FASGame(QQmlContext *context)
    :
      m_time(120 * 60),
      m_delay(1000/60),
      m_tapSelected(0),
      m_drink(m_delay),
      m_player(new Player()),
      m_order(nullptr, 0),
      m_context(context),
      m_perSecond(this)
{
    setTapSelected(0);

    for (int i=0; i<NBTAP; i++)
        m_tap[i] = new Tap();

    connect(&m_perSecond, &QTimer::timeout, this, &FASGame::oneSecond);
    connect(&m_drink, &Drink::full, this,  &FASGame::failOrder);
    connect(&m_order,  &Order::failed, this,&FASGame::failOrder);
}

int FASGame::time() const
{
    return m_time;
}

void FASGame::setTime(int time)
{
    if (m_time == time)
        return;

    m_time = time;
    emit timeChanged(m_time);
}

bool FASGame::isFinish()
{
    return m_finish;
}

void FASGame::start(unsigned duration)
{
    generateOrder(m_order);

    m_finish = false;
    m_start_serv = false;

    m_context->setContextProperty("fas", this);
    m_context->setContextProperty("order", &m_order);
    m_context->setContextProperty("drink", &m_drink);
    m_context->setContextProperty("player", m_player);
    for (int i=0; i<NBTAP; i++) {
        std::string s = "tapObject" + std::to_string(i);
        m_context->setContextProperty(s.c_str(), m_tap[i]);
    }

    QTimer::singleShot(duration*1000, this, &FASGame::end);

    m_perSecond.start(m_delay);
}

void FASGame::keyEventListener(int key)
{
    switch(key) {
    case Qt::Key_Space:
        if (!m_tap[tapSelected()]->actif())
            serverOrder();
        break;
    case Qt::Key_R:
        m_tap[tapSelected()]->setActif(!m_tap[tapSelected()]->actif());
        m_start_serv = true;
        break;
    case Qt::Key_A:
        if (!m_start_serv) {
            m_tap[tapSelected()]->setActif(false);
            if (tapSelected() == NBTAP-1) {
                setTapSelected(0);
                return;
            }
            setTapSelected(tapSelected()+1);
        } else
            emit noSwitch();
        break;
    }
}

void FASGame::oneSecond()
{
   setTime(time() - 1);

   m_order.oneSecond();
   if (m_tap[tapSelected()]->actif())
       m_drink.oneSecond();

}

void FASGame::setTapSelected(int tapSelected)
{
    if (m_tapSelected == tapSelected)
        return;

    m_tapSelected = tapSelected;
    emit tapSelectedChanged(m_tapSelected);
}

void FASGame::end()
{
    qDebug() << "Fin du jeu";

    m_finish = true;
    m_perSecond.stop();
    //emit un signal find du game et retour menu/jeu
}

int FASGame::tapSelected() const
{
    return m_tapSelected;
}

FASGame::~FASGame()
{
    delete m_player;
}

void FASGame::failOrder()
{
    m_tap[tapSelected()]->setActif(false);
    m_drink.reset();
    m_player->removePoint(100);

    newOrder();
}

void FASGame::newOrder()
{
    generateOrder(m_order);
}

void FASGame::serverOrder()
{
    m_tap[tapSelected()]->setActif(false);
    m_start_serv = false;

    double foam = m_drink.foam()->quantity();
    double beer = m_drink.beer()->quantity();
    double totalDrink = foam + beer;

    if (totalDrink >= 100 || totalDrink <= 85) m_player->removePoint(50);
    else if ((foam >= 13. && foam < 17) && (beer >= 80 && beer < 84)) m_player->addPoint(100);
    else if ((foam >= 12 && foam <= 18) && (beer >= 75 && beer <= 86)) m_player->addPoint(75);
    else if ((foam >= 10 && foam <= 20) && (beer >= 70 && beer <= 91)) m_player->addPoint(50);
    else m_player->removePoint(25);

    m_drink.reset();
    newOrder();
}

