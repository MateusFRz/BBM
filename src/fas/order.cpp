#include "header/order.h"

#include <QDebug>

Order::Order(Beer* beer, int time)
    : m_time(time),
      m_beer(beer)
{
    //setTime(time);
}

Order::~Order()
{
    delete m_beer;
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

    if (m_time <= 0)
        emit failed();

    emit timeChanged(m_time);
}

void Order::setBeer(Beer *beer)
{
    if (m_beer == beer)
        return;

    m_beer = beer;
}

void Order::oneSecond()
{
    setTime(time() - 1);
}
