#include "header/notebook.h"
#include "metier/header/bar.h"
#include "metier/header/beerbuilder.h"
#include "fas/header/fasgame.h"
#include "../stub.h"

#include <QDebug>

ModelBeer * m_modelBeer = new ModelBeer();

Notebook::~Notebook()
{

}

Notebook::Notebook(QQmlContext *m_context)
    : m_context(m_context)
{
}

void Notebook::init()
{

    m_context.rootContext()->setContextProperty("notebook", this);
    m_context.rootContext()->setContextProperty("modelBeer", m_modelBeer);

}

void Notebook::startNotebook() {
    Stub::stubModel(m_modelBeer);
}

void Notebook::createBeer() {
    Beer *beer = new Beer("N/A",10,60,1060,"N/A","N/A",new Recipe(0));
    m_modelBeer->addBeer(beer);
}

void Notebook::deleteBeer(int index){
    m_modelBeer->removeRow(index);
}

void Notebook::updateBeer(QString beerName,
                          int beerAlcoholLevels,
                          int beerIBU,
                          int beerDensity,
                          QString beerColor,
                          QString beerType,
                          QString hops,
                          QString malts,
                          int index){

    Beer * m_beer = m_modelBeer->getBeer(index);

    vector<Ingredient*> list= m_beer->recipe()->getListIngredient();
    for (Ingredient* x : list){
        if (x->name() != hops && x->name() != malts){
            x->setName(hops);
        }

        if (x->name() != hops && x->name() != malts){
            x->setName(malts);
        }
    }

    m_beer->setIBU(beerIBU);
    m_beer->setName(beerName);
    m_beer->setType(beerType);
    m_beer->setColor(beerColor);
    m_beer->setDensity(beerDensity);
    m_beer->setAlcoholeLevels(beerAlcoholLevels);
}
