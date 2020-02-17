#ifndef FIGHT_H
#define FIGHT_H

#include "timedevent.h"

class Fight : public TimedEvent
{
public:
    Fight(QString name, int time);
    void applyEvent(int time) override;
};

#endif // FIGHT_H
