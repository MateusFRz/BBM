#ifndef RECIPE_H
#define RECIPE_H

#include <QObject>
#include "ingredient.h"

class Recipe
{
const static int maxIngredient = 5;

private:

    QString name;
    float preperationTime;
    Ingredient ingredient[maxIngredient];

public:

    Recipe();


};

#endif // RECIPE_H
