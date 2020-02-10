#ifndef BAR_H
#define BAR_H

#include <QObject>
#include "enumeration/baraddress.h"
#include "enumeration/enumtool.cpp"

class Bar : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int wallet READ wallet WRITE setWallet NOTIFY walletChanged)
    Q_PROPERTY(int popularity READ popularity WRITE setPopularity NOTIFY popularityChanged)
public:
    explicit Bar(QString barName, QString barAddress);

    int popularity() const;
    QString name() const;
    int wallet() const;
    BarAddress address;
    QString getAddress();


signals:

    void popularityChanged(int popularity);
    void nameChanged(QString name);
    void walletChanged(int wallet);

public slots:

    void setPopularity(int popularity);
    void setName(QString name);
    void setWallet(int wallet);
    void setAdress(BarAddress barAddress);
    void setAddressQString(QString stringAddress);

private :

    int m_popularity;
    QString m_barName;
    int m_wallet;
};

#endif // BAR_H
