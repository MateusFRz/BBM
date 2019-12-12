#include "ingredient.h"

Ingredient::Ingredient() : name("unamed"), type(Type::NOTHING){
}

Ingredient::Ingredient(QString ingredientName, Type ingredientType) : name(ingredientName), type(ingredientType){
}

Ingredient::Ingredient(QString ingredientName, QString stringType) : name(ingredientName){
   setTypeQString(stringType);
}
