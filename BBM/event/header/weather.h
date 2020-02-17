#ifndef WEATHER_H
#define WEATHER_H

#include "timedevent.h"

class Weather : public TimedEvent
{
public:
    Weather(QString name, int time);
    void applyEvent(int time) override;
};

#endif // WEATHER_H
