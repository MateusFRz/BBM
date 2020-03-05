#include "header/fasgame.h"

#include <QQmlApplicationEngine>
#include <QQmlContext>

FASGame::FASGame(QObject *parent) : QObject(parent)
{
    orderModel = new OrderModel();
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
    return finish;
}

void FASGame::start()
{
    finish = false;
    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    Drink *d = new Drink();

    context->setContextProperty("drink", d);
    context->setContextProperty("fas", this);
}

void FASGame::serveDrink(int key)
{
    if (key == Qt::Key_Space) {
        qDebug("Verre servit master");
        addOrder();
    }
}

void FASGame::end()
{
    finish = true;
}

void FASGame::addOrder()
{
    qDebug("Verre ajouter master");
    orderModel->addOrder(OrderGenerator::generateOrder());
}
