#include "header/fight.h"

Fight::Fight(QString name, int time): Event(name, time)
{

}

void Fight::applyEvent(int time)
{
    //TODO Message a l'utilisateur
    bar->setPopularity((bar->popularity()-2));

}

void Fight::reverse()
{
    bar->setPopularity((bar->popularity()+2));
}
