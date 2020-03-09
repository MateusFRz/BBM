#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <QObject>
#include "game/header/game.h"

class GameModel : public QObject
{
    Q_OBJECT
public:
    explicit GameModel(QObject *parent = nullptr);

    void newGame(QString name, QString address);
    void launchGame(int saveNumber);

signals:

public slots:
};

#endif // GAMEMODEL_H
