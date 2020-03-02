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
    model->addBeer(new Biere("Duff","pils",34,1600));
    model->addBeer(new Biere("Heineken","blonde",21,1600));
    model->addBeer(new Biere("Guinness Draught","stout",42,1600));
    model->addBeer(new Biere("Guinness Foreign","extra stout",75,1600));
    model->addBeer(new Biere("Guinness Original","stout",50,1600));
    model->addBeer(new Biere("Guinness Dublin Porter","porter",38,1600));
    model->addBeer(new Biere("Guinness West Indies Porter","porter",60,1600));
    model->addBeer(new Biere("Guinness Golden Ale","ale",45,1600));
    model->addBeer(new Biere("Guinness Hop House 13 Lager","lager",50,1600));
    model->addBeer(new Biere("Guinness Blonde American Lager","american lager",50,1600));
    model->addBeer(new Biere("Guinness Nitro IPA","ipa",58,1600));
    model->addBeer(new Biere("Guinness Special Export","stout",80,1600));

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


