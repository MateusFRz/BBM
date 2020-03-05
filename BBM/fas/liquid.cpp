#include "header/liquid.h"

Liquid::Liquid(QObject *parent) : QObject(parent)
{

}

int Liquid::quantity() const
{
    return m_quantity;
}

int Liquid::quotient() const
{
    return m_quotient;
}

void Liquid::updateQuantity()
{
    m_quantity += m_quotient;
    emit quantityChanged(m_quantity);
}

void Liquid::setQuotient(int quotient)
{
    m_quotient = quotient;
    emit quotientChanged(m_quotient);
}
