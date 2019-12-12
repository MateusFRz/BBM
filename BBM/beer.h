#ifndef BEER_H
#define BEER_H

#include <QObject>

class Beer
{
private:

    QString name;
    float alcoholLevels;
    float IBU;
    float density;
    float color;

public:

    Beer();
    Beer(QString beerName, float beerAlcoholLevels, float beerIBU, float beerDensity, float beerColor);

    void setName(QString ingredientName){
        name = ingredientName;
    }

    QString getName() {
        return name;
    }

    void setAlcoholLevels(float beerAlcoholLevels) {
        alcoholLevels = beerAlcoholLevels;
    }

    float getAlcoholLevels() {
        return alcoholLevels;
    }

    void setIBU(float beerIBU) {
        IBU = beerIBU;
    }

    float getIBU() {
        return IBU;
    }

    void setDensity(float beerDensity) {
        density = beerDensity;
    }

    float getDensity() {
        return density;
    }

    void setColor(float beerColor) {
        color = beerColor;
    }

    float getColor() {
        return color;
    }



};

#endif // BEER_H
