#ifndef DAYOFFEMPLOYEE_H
#define DAYOFFEMPLOYEE_H

#include "timedevent.h"

class DayOffEmployee : public TimedEvent
{
public:
    DayOffEmployee(QString name, int time);
    void applyEvent(int time) override;
};

#endif // DAYOFFEMPLOYEE_H
