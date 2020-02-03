#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QObject>
#include "enumeration/ingredienttype.h"
#include "enumeration/enumtool.cpp"

class Ingredient
{
private:

    QString name;
    IngredientType type;

public:

    Ingredient();
    Ingredient(QString ingredientName, IngredientType ingredientType);
    Ingredient(QString ingredientName, QString stringType);

    void setName(QString ingredientName);
    QString getName();
    void setType(IngredientType ingredientType);
    void setTypeQString(QString stringType);
    IngredientType getType();


};


#endif // INGREDIENT_H
