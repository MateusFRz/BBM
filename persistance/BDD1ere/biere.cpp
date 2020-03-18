#include "biere.h"


biere::biere(QString beerName,int beerAlcoholLevels, int beerIBU ,int beerDensity , int beerColor ,QString beertype) : m_name(beerName), alcoholLevels(beerAlcoholLevels) ,IBU(beerIBU),density(beerDensity),color(beerColor),type(beertype){
}

QString biere::name() const
{
    return m_name;
}
