#ifndef BEER_H
#define BEER_H

#include <QObject>

class Beer
{
public:

    Beer();

private:

    QString name;
    float alcoholLevels;
    float IBU;
    float density;
    float color;


};

#endif // BEER_H
