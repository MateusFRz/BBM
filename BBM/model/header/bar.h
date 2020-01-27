#ifndef BAR_H
#define BAR_H

#include <QObject>

class Bar : public QObject
{
    Q_OBJECT
public:
    explicit Bar(QString barName, int barWallet);
    void setName(QString barName);
    QString getName();
    void setWallet(int barWallet);
    int getWallet();

signals:

public slots:

private :
    QString name;
    int wallet;


};

#endif // BAR_H
