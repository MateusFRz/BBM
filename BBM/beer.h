#ifndef BEER_H
#define BEER_H

#include <QObject>
#include "beertype.h"

class Beer : public QObject
{
    Q_OBJECT

private:

    QString name;
    int alcoholLevels;
    int IBU;
    int density;
    int color;
    BeerType type;

public:

    Beer(QString beerName, int beerAlcoholLevels, int beerIBU, int beerDensity, int beerColor);

    void setName(QString ingredientName);
    QString getName();
    void setAlcoholLevels(int beerAlcoholLevels);
    int getAlcoholLevels();
    void setIBU(int beerIBU);
    int getIBU();
    void setDensity(int beerDensity);
    int getDensity();
    void setColor(int beerColor);
    int getColor();
    void setBeerType(BeerType beerBeerType);
    void setBeerTypeQString(QString stringBeerType);
    BeerType getBeerType();

};

#endif // BEER_H
