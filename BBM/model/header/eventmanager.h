#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <QObject>
#include <event/header/event.h>
#include "randomeventfactory.h"
using namespace std;

class EventManager : public QObject
{
    Q_OBJECT

private:
    array<Event*, 50> listEvent;
    enum event  {
        NOTHING,
        BLAZE,
        BROKENEQUIPEMENT,
        COMPETITION,
        CUSTOMER,
        DELIVERYPROBLEM,
        FIGHT,
        FINE,
        INSPECTORATE,
        RECEPTION,
        STRIKE,
        TAX,
        UNVEILLING,
        WEATHER
    };


public:
    explicit EventManager(QObject *parent = nullptr);
    void launchEvent(int hour, int minute);
    void fillList();
    void clearList();

signals:

public slots:

};

#endif // EVENTMANAGER_H
