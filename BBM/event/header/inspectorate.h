#ifndef INSPECTORATE_H
#define INSPECTORATE_H

#include "timedevent.h"

class Inspectorate : public TimedEvent
{
public:
    Inspectorate(QString name, int time);
    void applyEvent(int time) override;
};

#endif // INSPECTORATE_H
