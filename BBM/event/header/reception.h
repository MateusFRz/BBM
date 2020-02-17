#ifndef RECEPTION_H
#define RECEPTION_H

#include "timedevent.h"

class Reception : public TimedEvent
{
public:
    Reception(QString name, int time);
    void applyEvent(int time) override;
};

#endif // RECEPTION_H
