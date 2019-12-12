#include "recipe.h"

Recipe::Recipe() : name("unamed"){
}

Recipe::Recipe(QString recipeName, float recipePreparationTime, vector<Ingredient> recipeListIngredient) : name(recipeName), preperationTime(recipePreparationTime), listIngredient(recipeListIngredient){
}

