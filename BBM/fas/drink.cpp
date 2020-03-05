#include "./header/drink.h"

Drink::Drink()
    : m_angle(90)
{}

int Drink::angle() const
{
    return m_angle;
}

void Drink::setAngle(int angle)
{
    if (m_angle == angle)
        return;

    m_angle = angle;
    emit angleChanged(m_angle);
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
    }
}
