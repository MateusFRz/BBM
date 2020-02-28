#ifndef DRINK_H
#define DRINK_H

#include <QObject>

class Drink : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int angle READ angle WRITE setAngle NOTIFY angleChanged)
    Q_PROPERTY(int foam READ foam WRITE setFoam NOTIFY foamChanged)
    Q_PROPERTY(int quantity READ quantity WRITE setQuantity NOTIFY quantityChanged)
    Q_PROPERTY(int positionX READ positionX WRITE setPositionX NOTIFY positionXChanged)
    Q_PROPERTY(int positionY READ positionY WRITE setPositionY NOTIFY positionYChanged)

public:
    Drink();

    int angle() const;
    int foam() const;
    int quantity() const;
    int positionX() const;
    int positionY() const;

public slots:
    void moveDrink(int key);
    void setAngle(int angle);
    void setFoam(int foam);
    void setQuantity(int quantity);
    void setPositionX(int positionX);
    void setPositionY(int positionY);

signals:
    void angleChanged(int angle);
    void foamChanged(int foam);
    void quantityChanged(int quantity);
    void positionXChanged(int positionX);
    void positionYChanged(int positionY);

private:
    int m_angle;
    int m_foam;
    int m_quantity;
    int m_positionX;
    int m_positionY;
};

#endif // DRINK_H
