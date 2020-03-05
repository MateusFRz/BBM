#ifndef DRINK_H
#define DRINK_H

#include "liquid.h"

#include <QObject>

class Drink : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int angle READ angle WRITE setAngle NOTIFY angleChanged)

public:
    Drink();

    int angle() const;

public slots:
    void moveDrink(int key);
    void setAngle(int angle);

signals:
    void angleChanged(int angle);

private:
    int m_angle;
    Liquid foam;
    Liquid beer;
};

#endif // DRINK_H
