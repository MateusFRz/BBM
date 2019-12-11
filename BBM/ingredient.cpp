#include "ingredient.h"

Ingredient::Ingredient() : name("unamed"), type(Type::NOTHING){
}

Ingredient::Ingredient(QString ingredientName, Type ingredientType) : name(ingredientName), type(ingredientType){
}

Ingredient::Ingredient(QString ingredientName, QString stringType) : name(ingredientName){
   // setTypeQString(stringType);
}
/*
void setName(QString ingredientName){
    name = ingredientName;
}

QString getName() {
    return name;
}

void setType(Type ingredientType){
    type = ingredientType;
}

void setTypeQString(QString stringType) {
    type = convertQStringToType(stringType);

}
*/
