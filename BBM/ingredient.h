#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QObject>
#include "Type.h"

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
    QString getStringFromType(Type type);


};


#endif // INGREDIENT_H
