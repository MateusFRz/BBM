#include "../header/keyboardevent.h"

KeyboardEvent::KeyboardEvent() : QObject()
{

}

void KeyboardEvent::keyPresse(QKeyEvent event)
{
    qDebug("d");
}
