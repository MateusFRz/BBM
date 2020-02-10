#include "header/bar.h"



Bar::Bar(QString barName, QString barAddress) : m_barName(barName), m_wallet(0), m_popularity(0)
{
    setAddressQString(barAddress);

}

int Bar::popularity() const
{
    return m_popularity;
}

QString Bar::name() const
{
    return m_barName;
}

int Bar::wallet() const
{
    return  m_wallet;
}

QString Bar::getAddress()
{
    return barAddressToQString(address);
}

void Bar::setPopularity(int popularity)
{
    if (m_popularity == popularity)
        return;

    m_popularity = popularity;
    emit popularityChanged(m_popularity);
}

void Bar::setName(QString name)
{
    if (m_barName == name)
        return;

    m_barName = name;
    emit nameChanged(m_barName);
}

void Bar::setWallet(int wallet)
{
    if (m_wallet == wallet)
        return;

    m_wallet = wallet;
    emit walletChanged(m_wallet);
}

void Bar::setAdress(BarAddress barAddress)
{
    address = barAddress;
}

void Bar::setAddressQString(QString stringAddress)
{
    address = QStringToBarAddress(stringAddress);
}
