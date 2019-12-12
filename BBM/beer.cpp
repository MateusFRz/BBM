#include "beer.h"

Beer::Beer() : name("unamed"){
}

Beer::Beer(QString beerName, float beerAlcoholLevels, float beerIBU, float beerDensity, float beerColor) : name(beerName), alcoholLevels(beerAlcoholLevels), IBU(beerIBU), density(beerDensity), color(beerColor){
}

void Beer::setName(QString ingredientName){
    name = ingredientName;
}

QString Beer::getName() {
    return name;
}

void Beer::setAlcoholLevels(float beerAlcoholLevels) {
    alcoholLevels = beerAlcoholLevels;
}

float Beer::getAlcoholLevels() {
    return alcoholLevels;
}

void Beer::setIBU(float beerIBU) {
    IBU = beerIBU;
}

float Beer::getIBU() {
    return IBU;
}

void Beer::setDensity(float beerDensity) {
    density = beerDensity;
}

float Beer::getDensity() {
    return density;
}

void Beer::setColor(float beerColor) {
    color = beerColor;
}

float Beer::getColor() {
    return color;
}
