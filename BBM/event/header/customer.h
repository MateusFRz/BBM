#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>
#include "event.h"

class Customer : public QObject //a hériter de Event
{
    Q_OBJECT
public:
    explicit Customer(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CUSTOMER_H
