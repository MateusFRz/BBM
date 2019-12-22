#include "recipe.h"

Recipe::Recipe() : name("unamed"){
}

Recipe::Recipe(QString recipeName, float recipePreparationTime, vector<Ingredient> recipeListIngredient) : name(recipeName), preperationTime(recipePreparationTime), listIngredient(recipeListIngredient){
}

void Recipe::setName(QString ingredientName){
    name = ingredientName;
}

QString Recipe::getName() {
    return name;
}

void Recipe::setPreparationTime (float recipePreparationTime) {
    preperationTime = recipePreparationTime;
}

float Recipe::getPreparationTime () {
    return preperationTime;
}

void Recipe::setListIngredient (vector<Ingredient> recipeListIngredient) {
    listIngredient = recipeListIngredient;
}

vector<Ingredient> Recipe::getListIngredient () {
    return listIngredient;
}
