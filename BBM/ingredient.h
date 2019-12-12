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

    void setName(QString ingredientName){
        name = ingredientName;
    }

    QString getName() {
        return name;
    }

    void setType(Type ingredientType){
        type = ingredientType;
    }

    void setTypeQString(QString stringType) {
        type = convertQStringToType(stringType);

    }


};


#endif // INGREDIENT_H
