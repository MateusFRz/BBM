#ifndef COMPETITION_H
#define COMPETITION_H

#include "timedevent.h"

class Competition : public TimedEvent
{
public:
    Competition(QString name, int time);
    void applyEvent(int time) override;
};

#endif // COMPETITION_H
