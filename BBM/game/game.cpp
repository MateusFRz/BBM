#include "header/game.h"
#include "metier/header/bar.h"
#include <QDebug>
#include "metier/header/beer.h"
#include "beerbuilder/header/beerbuilder.h"
#include <QQuickView>
#include <QQmlContext>
#include <QQmlComponent>
#include "metier/header/ingredient.h"

Game::Game()
{

}

Game::~Game()
{

}

Game::Game(QString gameName, QString barAddress) : m_name(gameName)
{
    gameBar.setName(gameName);
    gameBar.setAddress(barAddress);
}

void Game::init(int argc, char *argv[])
{
   // test();
    launchViewApp(argc, argv);
}

int Game::launchViewApp(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    Beer * beer = new Beer("Guinness Special Export",20,80,1060,"noire","stout",new Recipe(3));
    BeerBuilder * beerBuild = new BeerBuilder();
    QQmlApplicationEngine engine;
    qmlRegisterType<Ingredient>("Beer",1,0,"Ingredient");
    qmlRegisterUncreatableType<Beer>("Beer",1,0,"Beer","Can t create a beer from QML");

    engine.rootContext()->setContextProperty("beer",beer);
    engine.rootContext()->setContextProperty("beerBuild",beerBuild);
    const QUrl url(QStringLiteral("qrc:game/bbm/beerCration.qml"));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

/*
void Game::test() {
    Bar bar("TestBar", "CENTEVILLE");
    qDebug() << bar.name() << " : " << bar.getAddress() << ":" << bar.wallet();
    bar.setWallet(10);
    qDebug() << bar.name() << " : " << bar.getAddress() << ":" << bar.wallet();

}*/

QString Game::name() const
{
    return m_name;
}

void Game::setName(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
    emit nameChanged(m_name);
}
