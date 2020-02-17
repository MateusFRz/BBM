#ifndef STRIKE_H
#define STRIKE_H

#include "timedevent.h"

class Strike : public TimedEvent
{
public:
    Strike(QString name, int time);
    void applyEvent(int time) override;
};

#endif // STRIKE_H
