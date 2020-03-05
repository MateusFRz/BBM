#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "beer.h"
#include "modelBeer.h"
#include "recipe.h"
#include <QQuickView>
#include <QQmlContext>
#include <QQmlComponent>

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

//  Beer(QString beerName, int beerAlcoholLevels, int beerIBU, int beerDensity, QString beerColor, QString beerType, Recipe* recipe);
    ModelBeer * model = new ModelBeer();
    model->addBeer(new Beer("Duff",20,34,1060,"dorée","pils",new Recipe(1)));
    model->addBeer(new Beer("Heineken",25,21,1060,"transparente","blonde",new Recipe(1)));
    model->addBeer(new Beer("Guinness Draught",15,42,1060,"noie","stout",new Recipe(3)));
    model->addBeer(new Beer("Guinness Foreign",15,75,1060,"noire","extra stout",new Recipe(4)));
    model->addBeer(new Beer("Guinness Original",15,50,1060,"noire","stout",new Recipe(3)));
    model->addBeer(new Beer("Guinness Dublin Porter",15,38,1060,"noire","porter",new Recipe(3)));
    model->addBeer(new Beer("Guinness West Indies Porter",10,60,1060,"dorée","porter",new Recipe(2)));
    model->addBeer(new Beer("Guinness Golden Ale",30,45,1060,"dorée","ale",new Recipe(2)));
    model->addBeer(new Beer("Guinness Hop House 13 Lager",55,50,1060,"blanche","lager",new Recipe(1)));
    model->addBeer(new Beer("Guinness Blonde American Lager",45,50,1060,"blanche","american lager",new Recipe(1)));
    model->addBeer(new Beer("Guinness Nitro IPA",70,58,1060,"blanche","ipa",new Recipe(2)));
    model->addBeer(new Beer("Guinness Special Export",20,80,1060,"noire","stout",new Recipe(3)));

    QQmlApplicationEngine engine;

    qmlRegisterUncreatableType<Beer>(
                "beerbar", 1, 0,
                "beer",
                "Can't create a beer from QML"
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


