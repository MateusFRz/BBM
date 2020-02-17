#ifndef BLAZE_H
#define BLAZE_H

#include "timedevent.h"

class Blaze : public TimedEvent
{
public:
    Blaze(QString name, int time);
    void applyEvent(int time) override;
};

#endif // BLAZE_H
