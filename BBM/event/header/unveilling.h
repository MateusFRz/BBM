#ifndef UNVEILLING_H
#define UNVEILLING_H

#include "timedevent.h"

class Unveilling : public TimedEvent
{
public:
    Unveilling(QString name, int time);
    void applyEvent(int time) override;
};

#endif // UNVEILLING_H
