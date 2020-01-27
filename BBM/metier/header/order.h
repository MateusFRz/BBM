#ifndef ORDER_H
#define ORDER_H

#include <QObject>

class Order : public QObject
{
    Q_OBJECT
public:
    explicit Order(QObject *parent = nullptr);

signals:

};

#endif // ORDER_H
