#include "header/game.h"
#include "metier/header/bar.h"
#include "fas/header/fasgame.h"

#include <QDebug>

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
    qmlRegisterUncreatableType<Beer>("beer",1,0,"Beer","Can't build a beer in QML");
    qmlRegisterType<Liquid>("liquid", 1, 0, "Liquid");

    launchViewApp(argc, argv);
}

int Game::launchViewApp(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    m_fas = new FASGame(engine.rootContext());

    engine.rootContext()->setContextProperty("game", this);

    const QUrl url(QStringLiteral("qrc:menu/mainGame.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    QObject::connect(this,
                     &Game::switchToFAS,
                     [&engine]() {
                         engine.load("qrc:/fas/mainFAS.qml");

                     }
    );

    connect(this, &Game::closeEvent, [](){
            //fermer le fas
    });

    engine.load(url);

    return app.exec();
}

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

void Game::startFAS() {
    m_fas->start();
    emit switchToFAS();
}

