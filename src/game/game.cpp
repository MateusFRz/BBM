#include "header/game.h"
#include "metier/header/bar.h"
#include "metier/header/beerbuilder.h"
#include "fas/header/fasgame.h"
#include "../stub.h"

#include <QDebug>

Game::Game()
{

}

Game::~Game()
{

}

Game::Game(QQmlContext *context)
    : m_context(context)
{
}

void Game::init()
{

    m_bar = Stub::stubBar();
    m_fas = new FASGame(m_context);
    m_modelBeer = new ModelBeer();

    m_context->setContextProperty("modelBeer", m_modelBeer);
    m_context->setContextProperty("bar", m_bar);
}

void Game::startFAS() {
    m_fas->start(120);
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

