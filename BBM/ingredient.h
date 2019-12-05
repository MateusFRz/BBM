#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QObject>
#include "Type.h"

class Ingredient
{
public:

    Ingredient();
    Ingredient(QString ingredientName, Type ingredientType);
    QString setName(QString name);
    Type setType(Type type);


private:

    QString name;
    Type type;
};
/*
void setName(QString newName){
     this-> = newName;
}
*/

#endif // INGREDIENT_H
