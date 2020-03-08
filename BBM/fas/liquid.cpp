#include "header/liquid.h"

Liquid::Liquid(QObject *parent) : QObject(parent)
{

}

double Liquid::quantity() const
{
    return m_quantity;
}

double Liquid::quotient() const
{
    return m_quotient;
}

void Liquid::updateQuantity()
{
    m_quantity += m_quotient;

    emit quantityChanged(m_quantity);
}

void Liquid::setQte(double qte)
{
    m_quantity = qte;
    emit quantityChanged(m_quantity);
}

QString Liquid::color() const
{
    return m_color;
}

void Liquid::setQuotient(double quotient)
{
    m_quotient = quotient;
}

void Liquid::setColor(QString color)
{
    if (m_color == color)
        return;

    m_color = color;
    emit colorChanged(m_color);
}
