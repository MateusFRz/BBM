#ifndef BIERE_H
#define BIERE_H

#include<QString>
#include<iostream>

class biere{

private:

    QString m_name;
    int alcoholLevels;
    int IBU;
    int density;
    int color;
    QString type;

public:

    biere(QString beerName, int beerAlcoholLevels, int beerIBU, int beerDensity, int beerColor ,QString type);

    QString name() const;
};
#endif
