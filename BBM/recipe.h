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

    void setName(QString ingredientName);
    QString getName();
    void setPreparationTime (float recipePreparationTime);
    float getPreparationTime ();
    void setListIngredient (vector<Ingredient> recipeListIngredient);
    vector<Ingredient> getListIngredient ();

};

#endif // RECIPE_H
