#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCloseEvent>

#include "metier/header/bar.h"
#include "metier/header/brewery.h"
#include "metier/header/modelBeer.h"
#include "fas/header/fasgame.h"

class Game : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
public:
    Game();
    ~Game();
    Game(QString gameName, QString barAddress, QQmlContext *m_context);
    void init();

    QString name() const;
    Q_INVOKABLE void startFAS();
    Q_INVOKABLE void startNotebook();
    Q_INVOKABLE void startGame();
    Q_INVOKABLE void createBeer(QString hopIng, QString maltyIng, int preparationTime, QString name);

signals:
    void switchToFAS();
    void switchToNotebook();
    void switchToGame();
    void nameChanged(QString name);
    void closeEvent(QCloseEvent *event);

public slots:
    void setName(QString name);

private:

    bool isRunning;
    QQmlApplicationEngine m_context;
    QString m_name;
    Bar gameBar;
    Brewery gameBrewery;
    FASGame *m_fas;
    ModelBeer *m_modelBeer;
};

#endif // GAME_H
