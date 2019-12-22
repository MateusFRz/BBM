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

    void setName(QString ingredientName);
    QString getName();
    void setAlcoholLevels(float beerAlcoholLevels);
    float getAlcoholLevels();
    void setIBU(float beerIBU);
    float getIBU();
    void setDensity(float beerDensity);
    float getDensity();
    void setColor(float beerColor);
    float getColor();

};

#endif // BEER_H
