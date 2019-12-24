#ifndef BEER_H
#define BEER_H

#include <QObject>

class Beer : public QObject
{
    Q_OBJECT

private:

    QString name;
    int alcoholLevels;
    int IBU;
    int density;
    int color;

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

};

#endif // BEER_H
