#ifndef RECIPE_H
#define RECIPE_H

#include <QObject>
#include "ingredient.h"

class Recipe
{
const static int maxIngredient = 5;

public:

    Recipe();

private:

    QString name;
    float preperationTime;
    Ingredient ingredient[maxIngredient];

};

#endif // RECIPE_H
