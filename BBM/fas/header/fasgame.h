#ifndef FASGAME_H
#define FASGAME_H

#include <QObject>

class FASGame : public QObject
{
    Q_OBJECT
public:
    explicit FASGame(QObject *parent = nullptr);

signals:

};

#endif // FASGAME_H
