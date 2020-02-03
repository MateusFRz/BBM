#include "header/ingredient.h"

Ingredient::Ingredient() : name("unamed"), type(IngredientType::NOTHING){
}

Ingredient::Ingredient(QString ingredientName, IngredientType ingredientType) : name(ingredientName), type(ingredientType){
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

void Ingredient::setType(IngredientType ingredientType){
    type = ingredientType;
}

void Ingredient::setTypeQString(QString stringType) {

    type = QStringToIngredientType(stringType);

}

IngredientType Ingredient::getType(){
    return type;
}
