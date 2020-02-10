#ifndef BREWERY_H
#define BREWERY_H

#include <QObject>

class Brewery : public QObject
{
    Q_OBJECT
public:
    explicit Brewery(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BREWERY_H