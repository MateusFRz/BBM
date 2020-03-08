#ifndef ORDER_H
#define ORDER_H

#include <QObject>
#include "../../metier/header/beer.h"

class Order : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int time READ time WRITE setTime NOTIFY timeChanged)

public:
    Order(Beer *beer, int time);


    int time() const;
    Q_INVOKABLE Beer *beer() const;
    void setBeer(Beer *beer);
    void oneSecond();

public slots:
    void setTime(int time);

signals:
    void timeChanged(int time);
    void failed();

private:
    int m_time;
    Beer *m_beer;
};

#endif // ORDER_H
