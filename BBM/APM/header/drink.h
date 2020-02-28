#ifndef DRINK_H
#define DRINK_H

#include <QObject>

class Drink : public QObject
{
    Q_OBJECT
public:
    explicit Drink(QObject *parent = nullptr);

signals:

};

#endif // DRINK_H
