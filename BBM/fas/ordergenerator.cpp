#include "header/ordergenerator.h"
#include <iostream>
#include <QRandomGenerator>

Order *OrderGenerator::generateOrder() {
    int time = QRandomGenerator(0, 10).generate();
    Beer *beer = new Beer("lofle", 5, 10, 5, 2);

    return new Order(beer, time);
}
