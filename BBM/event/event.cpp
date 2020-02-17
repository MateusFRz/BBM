#include "event/header/event.h"

Event::Event(QString name): m_name(name), m_runtime(-1)
{

}

Event::Event(QString name, int time): m_name(name), m_runtime(time)
{

}

QString Event::name() const
{
    return m_name;
}

int Event::runtime() const
{
    return m_runtime;
}

void Event::lauchEvent(int time)
{
    if (m_runtime == -1) applyEvent();
    else applyEvent(time);
}

void Event::setName(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
    emit nameChanged(m_name);
}

void Event::setRuntime(int runtime)
{
    if (m_runtime == runtime)
        return;

    m_runtime = runtime;
    emit runtimeChanged(m_runtime);
}
