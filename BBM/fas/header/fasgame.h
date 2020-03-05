#ifndef FASGAME_H
#define FASGAME_H

#include "order.h"
#include "ordergenerator.h"
#include "drink.h"
#include "ordermodel.h"

#include <QObject>

class FASGame : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int time READ time WRITE setTime NOTIFY timeChanged)
public:
    explicit FASGame(QObject *parent = nullptr);

    int time() const;
    bool isFinish();
    void start();
    void end();

public slots:
    void setTime(int time);
    void serveDrink(int key);

signals:
    void timeChanged(int time);

private:
    void addOrder();

    bool finish;
    int m_time;
    OrderModel *orderModel;
};

#endif // FASGAME_H
