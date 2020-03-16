#include "header/ordergenerator.h"
#include <iostream>
#include <QRandomGenerator>

Order *OrderGenerator::generateOrder() {
    int time = QRandomGenerator::global()->bounded(8, 16);
    Beer *beer = new Beer("lofle", 0, 0, 0, "", "", new Recipe(5));
    return new Order(beer, time * 60);
}
