#include "header/beer.h"

Beer::Beer(QString beerName, int beerAlcoholLevels, int beerIBU, int beerDensity, int beerColor) : name(beerName), alcoholLevels(beerAlcoholLevels), IBU(beerIBU), density(beerDensity), color(beerColor){
}

void Beer::setName(QString ingredientName){
    name = ingredientName;
}

QString Beer::getName() {
    return name;
}

void Beer::setAlcoholLevels(int beerAlcoholLevels) {
    alcoholLevels = beerAlcoholLevels;
}

int Beer::getAlcoholLevels() {
    return alcoholLevels;
}

void Beer::setIBU(int beerIBU) {
    IBU = beerIBU;
}

int Beer::getIBU() {
    return IBU;
}

void Beer::setDensity(int beerDensity) {
    density = beerDensity;
}

int Beer::getDensity() {
    return density;
}

void Beer::setColor(int beerColor) {
    color = beerColor;
}

int Beer::getColor() {
    return color;
}

void Beer::setBeerType(BeerType beerBeerType){
    type = beerBeerType;
}

void Beer:: setBeerTypeQString(QString stringBeerType) {

    if (stringBeerType=="BLONDE") type = BeerType::BLONDE;
    else if (stringBeerType=="BRUNE") type = BeerType::BRUNE;
    else if (stringBeerType=="ROUSSELOL") type = BeerType::ROUSSELOL;
    else type = BeerType::NOTHING;
}

BeerType Beer::getBeerType(){
    return type;
}
