#ifndef KEYBOARDEVENT_H
#define KEYBOARDEVENT_H

#include <QObject>
#include <QKeyEvent>

class KeyboardEvent : public QObject
{
    Q_OBJECT
public:
    KeyboardEvent();
signals:
    void keyPresse(QKeyEvent event);

};

#endif // KEYBOARDEVENT_H
