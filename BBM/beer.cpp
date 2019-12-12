#include "beer.h"

Beer::Beer() : name("unamed"){
}

Beer::Beer(QString beerName, float beerAlcoholLevels, float beerIBU, float beerDensity, float beerColor) : name(beerName), alcoholLevels(beerAlcoholLevels), IBU(beerIBU), density(beerDensity), color(beerColor){
}
