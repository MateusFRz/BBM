#ifndef RANDOMEVENTFACTORY_H
#define RANDOMEVENTFACTORY_H

#include <QObject>

#include <event/header/event.h>


class RandomEventFactory : public QObject
{
    Q_OBJECT
public:
    explicit RandomEventFactory();
    Event* createEvent();

signals:

public slots:
};

#endif // RANDOMEVENTFACTORY_H
