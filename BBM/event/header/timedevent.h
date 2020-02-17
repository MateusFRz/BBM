#ifndef TIMEDEVENT_H
#define TIMEDEVENT_H

#include "event.h"

class TimedEvent : public Event
{
    Q_PROPERTY(int runtime READ runtime WRITE setRuntime NOTIFY runtimeChanged)
public:
    TimedEvent(QString name, int time);

    virtual void applyEvent(int time) override;

    int runtime() const;

public slots:
    void setRuntime(int runtime);

signals:
    void runtimeChanged(int runtime);

private:

    int m_runtime;
};

#endif // TIMEDEVENT_H
