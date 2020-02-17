#include "event/header/event.h"

Event::Event(QString name): m_name(name)
{

}

QString Event::name() const
{
    return m_name;
}

void Event::setName(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
    emit nameChanged(m_name);
}
