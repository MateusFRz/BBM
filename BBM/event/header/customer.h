#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>
#include "timedevent.h"

class Customer : public TimedEvent
{

public:
    explicit Customer(QString name, int time);
    void applyEvent(int time) override;

signals:

public slots:
};

#endif // CUSTOMER_H
