#include "header/eventmanager.h"

EventManager::EventManager(QObject *parent) : QObject(parent)
{

}

void EventManager::launchEvent(int hour, int minute)
{

}

void EventManager::fillList()
{

}

void EventManager::clearList()
{
    listEvent = array<Event *, 50>();
}
