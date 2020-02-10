#include "header/game.h"
#include "metier/header/bar.h"
#include <QDebug>

Game::Game()
{

}

Game::~Game()
{

}

void Game::init(int argc, char *argv[])
{
    test();
    launchViewApp(argc, argv);
}

int Game::launchViewApp(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}


void Game::test() {
    Bar bar("TestBar", "CENTEVILLE");
    qDebug() << bar.name() << " : " << bar.getAddress() << ":" << bar.wallet();
    bar.setWallet(10);
    qDebug() << bar.name() << " : " << bar.getAddress() << ":" << bar.wallet();

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
