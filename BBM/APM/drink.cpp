#include "./header/drink.h"

Drink::Drink()
    : m_angle(0), m_foam(0), m_quantity(0),
      m_positionX(0), m_positionY(0)
{}

int Drink::angle() const
{
    return m_angle;
}

int Drink::foam() const
{
    return m_foam;
}

int Drink::quantity() const
{
    return m_quantity;
}

int Drink::positionY() const
{
    return m_positionY;
}

int Drink::positionX() const
{
    return m_positionX;
}

void Drink::setAngle(int angle)
{
    if (m_angle == angle)
        return;

    m_angle = angle;
    emit angleChanged(m_angle);
}

void Drink::setFoam(int foam)
{
    if (m_foam == foam)
        return;

    m_foam = foam;
    emit foamChanged(m_foam);
}

void Drink::setQuantity(int quantity)
{
    if (m_quantity == quantity)
        return;

    m_quantity = quantity;
    emit quantityChanged(m_quantity);
}

void Drink::setPositionY(int positionY)
{
    if (m_positionY == positionY)
        return;

    m_positionY = positionY;
    emit positionYChanged(m_positionY);
}

void Drink::setPositionX(int position)
{
    if (m_positionX == position)
        return;

    m_positionX = position;
    emit positionXChanged(m_positionX);
}


void Drink::moveDrink(int key)
{
    switch (key) {
    case Qt::Key_Right:
            setAngle(angle() + 5);
        break;
        case Qt::Key_Left:
            setAngle(angle() - 5);
        break;
        case Qt::Key_Q:
            setPositionX(positionX() - 5);
        break;
        case Qt::Key_D:
            setPositionX(positionX() + 5);
        break;
        case Qt::Key_Z:
            setPositionY(positionY() - 5);
        break;
        case Qt::Key_S:
            setPositionY(positionY() + 5);
        break;
    }
}
