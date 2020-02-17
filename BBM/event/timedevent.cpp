#include "header/timedevent.h"

TimedEvent::TimedEvent(QString name, int time): Event(name), m_runtime(time)
{

}

int TimedEvent::runtime() const
{
    return m_runtime;
}

void TimedEvent::setRuntime(int runtime)
{
    if (m_runtime == runtime)
        return;

    m_runtime = runtime;
    emit runtimeChanged(m_runtime);
}
