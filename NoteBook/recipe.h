#ifndef RECIPE_H
#define RECIPE_H

#include <QObject>
#include "ingredient.h"
#include "vector"
using namespace std;

class Recipe : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int preparationTime READ preparationTime WRITE setPreparationTime NOTIFY preparationTimeChanged)

private:

    int m_beerID;
    int m_preparationTime;
    vector<Ingredient *> listIngredient;

public:

    explicit Recipe(int recipePreparationTime);

    int preparationTime() const;

public slots:

    void setPreparationTime(int preparationTime);
    void addIngredient(Ingredient* ingredient);
    void deleteIngredient(Ingredient* ingredient);


signals:
    void preparationTimeChanged(int preparationTime);
};

#endif // RECIPE_H
