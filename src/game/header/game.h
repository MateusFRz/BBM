#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCloseEvent>

#include "metier/header/bar.h"
#include "metier/header/brewery.h"
#include "fas/header/fasgame.h"

class Game : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
public:
    Game();
    ~Game();
    Game(QString gameName, QString barAddress);
    void init(int argc, char *argv[]);
    int launchViewApp(int argc, char *argv[]);

    QString name() const;
    Q_INVOKABLE void startFAS();

signals:
    void switchToFAS();
    void nameChanged(QString name);
    void closeEvent(QCloseEvent *event);

public slots:
    void setName(QString name);

private:

    bool isRunning;
    QString m_name;
    Bar gameBar;
    Brewery gameBrewery;
    FASGame *m_fas;
};

#endif // GAME_H
