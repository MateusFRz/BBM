#include "header/order.h"

Order::Order(Beer *beer, int time) {
    this->beer = beer;
    this->time = time;
}

int Order::getTime() {
    return time;
}
Beer* Order::getBeer() {
    return beer;
}

void Order::setBeer(Beer *beer) {
    this->beer = beer;
}
void Order::setTime(int time) {
    this->time = time;
}
