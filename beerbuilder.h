#ifndef BEERBUILDER_H
#define BEERBUILDER_H

#include <QObject>
#include "metier/header/beer.h"

class BeerBuilder : public QObject
{
    Q_OBJECT
public:
    explicit BeerBuilder(QObject *parent = nullptr);
public slots:
    Beer * creatBeer(QString hopIng, QString maltyIng, int preparationTime, QString name);

signals:

};

#endif // BEERBUILDER_H

