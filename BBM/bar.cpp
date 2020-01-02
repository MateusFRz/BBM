#include "bar.h"

Bar::Bar(QString barName, int barWallet) : name(barName), wallet(barWallet)
{

}

void Bar::setName(QString barName){
    name = barName;
}

QString Bar::getName() {
    return name;
}

void Bar::setWallet(int barWallet) {
    wallet = barWallet;
}

int Bar::getWallet() {
    return wallet;
}

