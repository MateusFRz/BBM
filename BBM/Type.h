#ifndef TYPE_H
#define TYPE_H

#include <QString>

enum class Type {
    NOTHING,
    HOUBLON,
    BLE,
};
/*
Type convertQStringToType (QString stringType){

    if (stringType=="HOUBLON") return Type::HOUBLON;
    else if (stringType=="BLE") return Type::BLE;
    else return Type::NOTHING;
}
*/



#endif // TYPE_H
