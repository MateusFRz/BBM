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
    if (m_quantity < 0)
        m_quantity = 0;

    emit quantityChanged(m_quantity);
}

void Liquid::setQte(double qte)
{
    m_quantity = qte;
    emit quantityChanged(m_quantity);
}

void Liquid::setQuotient(double quotient)
{
    m_quotient = quotient;
}