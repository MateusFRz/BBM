#include "header/order.h"

Order::Order(Beer *beer, int time) {
}

int Order::time() const
{
    return m_time;
}

Beer *Order::beer() const
{
    return m_beer;
}


void Order::setTime(int time)
{
    if (m_time == time)
        return;

    m_time = time;
    emit timeChanged(m_time);
}

void Order::setBeer(Beer *beer)
{
    if (m_beer == beer)
        return;

    m_beer = beer;
}
