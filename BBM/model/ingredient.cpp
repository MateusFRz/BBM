#include "header/ingredient.h"

Ingredient::Ingredient() : name("unamed"), type(Type::NOTHING){
}

Ingredient::Ingredient(QString ingredientName, Type ingredientType) : name(ingredientName), type(ingredientType){
}

Ingredient::Ingredient(QString ingredientName, QString stringType) : name(ingredientName){
   setTypeQString(stringType);
}

void Ingredient::setName(QString ingredientName){
    name = ingredientName;
}

QString Ingredient::getName() {
    return name;
}

void Ingredient::setType(Type ingredientType){
    type = ingredientType;
}

void Ingredient::setTypeQString(QString stringType) {

    if (stringType=="HOUBLON") type = Type::HOUBLON;
    else if (stringType=="BLE") type = Type::BLE;
    else type = Type::NOTHING;

}

Type Ingredient::getType(){
    return type;
}
