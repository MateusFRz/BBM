#ifndef RECIPE_H
#define RECIPE_H

#include <QObject>
#include "ingredient.h"
#include "vector"
using namespace std;

class Recipe
{

private:

    QString name;
    float preperationTime;
    vector<Ingredient> listIngredient;

public:

    Recipe();
    Recipe(QString recipeName, float recipePreparationTime, vector<Ingredient> recipeListIngredient);

    void setName(QString ingredientName){
        name = ingredientName;
    }

    QString getName() {
        return name;
    }

    void setPreparationTime (float recipePreparationTime) {
        preperationTime = recipePreparationTime;
    }

    float getPreparationTime () {
        return preperationTime;
    }

    void setListIngredient (vector<Ingredient> recipeListIngredient) {
        listIngredient = recipeListIngredient;
    }

    vector<Ingredient> getListIngredient () {
        return listIngredient;
    }


};

#endif // RECIPE_H
