#include "header/game.h"
#include "metier/header/bar.h"
#include "metier/header/beerbuilder.h"
#include "fas/header/fasgame.h"
#include "../stub.h"

#include <QDebug>

Game::~Game()
{

}

Game::Game(QString gameName, QString barAddress, QQmlContext *m_context)
    : m_context(m_context),
      m_name(gameName)
{
    gameBar.setName(gameName);
    gameBar.setAddress(barAddress);
}

void Game::init()
{

    m_fas = new FASGame(m_context.rootContext());
    m_modelBeer = new ModelBeer();

    m_context.rootContext()->setContextProperty("game", this);
    m_context.rootContext()->setContextProperty("modelBeer", m_modelBeer);
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

void Game::startNotebook() {
    Stub::stubModel(m_modelBeer);
    emit switchToNotebook();
}

void Game::startGame() {
    emit switchToGame();
}

void Game::createBeer(QString hopIng, QString maltyIng, int preparationTime, QString name) {
    Beer *beer = BeerBuilder::createBeer(hopIng, maltyIng, preparationTime, name);
    m_modelBeer->addBeer(beer);
}

