#include "header/gamemodel.h"


GameModel::GameModel(QObject *parent) : QObject(parent)
{

}

void GameModel::newGame(QString name, QString address)
{
    Game game(name, address);
}

void GameModel::launchGame(int saveNumber)
{

}
