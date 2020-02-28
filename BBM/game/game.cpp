#include "header/game.h"
#include "APM/header/drink.h"

#include <QQmlContext>

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

    Drink *d = new Drink;

    QQmlContext *context = engine.rootContext();
    context->setContextProperty("drink", d);


    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    return app.exec();
}

