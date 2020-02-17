#ifndef COMPETITION_H
#define COMPETITION_H

#include "event.h"

class Competition : public Event
{
public:
    Competition(QString name, int time);
    void applyEvent(int time) override;
    void reverse() override;
};

#endif // COMPETITION_H
