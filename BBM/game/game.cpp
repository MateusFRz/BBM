#include "header/game.h"
#include "fas/header/fasgame.h"

#include <QQmlContext>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

Game::Game()
{

}

Game::~Game()
{

}

void Game::init(int argc, char *argv[])
{
    lauchApp(argc, argv);
}

int Game::lauchApp(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);


    QQmlApplicationEngine engine;

    /*Drink *d = new Drink;

    QQmlContext *context = engine.rootContext();
    context->setContextProperty("drink", d);*/

    //qmlRegisterUncreatableType<Beer>("beertypes",1,0,"Beer","Can't build a beer in QML");
   // qRegisterMetaType<Beer>();

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    FASGame *fas = new FASGame();
    fas->start();

    return app.exec();
}

