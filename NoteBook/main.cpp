#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "biere.h"
#include "bieremodel.h"
#include <QQuickView>
#include <QQmlContext>
#include <QQmlComponent>

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    BiereModel * model = new BiereModel();
    model->addBeer(new Biere("duff","degeu",34,3));
    model->addBeer(new Biere("Heineken","pas vraimen de la bier",21,4));

    QQmlApplicationEngine engine;

    qmlRegisterUncreatableType<Biere>(
                "beerbar", 1, 0,
                "Biere",
                "Can't create a beef from QML"
                );

    engine.rootContext()->setContextProperty("modelBeer",model);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    return app.exec();
}


