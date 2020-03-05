#ifndef ORDERMODEL_H
#define ORDERMODEL_H

#include <QObject>

class OrderModel : public QObject
{
    Q_OBJECT
public:
    explicit OrderModel(QObject *parent = nullptr);

signals:

};

#endif // ORDERMODEL_H
