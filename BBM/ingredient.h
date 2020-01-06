#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QObject>
#include "type.h"

class Ingredient
{
private:

    QString name;
    Type type;

public:

    Ingredient();
    Ingredient(QString ingredientName, Type ingredientType);
    Ingredient(QString ingredientName, QString stringType);

    void setName(QString ingredientName);
    QString getName();
    void setType(Type ingredientType);
    void setTypeQString(QString stringType);
    Type getType();


};


#endif // INGREDIENT_H
