#ifndef ORDER_H
#define ORDER_H

#include <QObject>
#include "beer.h"

class Order : public QObject
{
    Q_OBJECT
public:
    Order(Beer *beer, int time);

    int getTime();
    Beer* getBeer();

    void setBeer(Beer *beer);
    void setTime(int time);

private:
    int time;
    Beer *beer;

signals:

};

#endif // ORDER_H
