#ifndef RECIPE_H
#define RECIPE_H

#include <QObject>
#include "ingredient.h"
#include "vector"
using namespace std;

class Recipe : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int beerID READ beerID WRITE setBeerID NOTIFY beerIDChanged)
    Q_PROPERTY(int preparationTime READ preparationTime WRITE setPreparationTime NOTIFY preparationTimeChanged)

private:

    int m_beerID;
    int m_preparationTime;
    vector<Ingredient *> listIngredient;

public:

    explicit Recipe(int recipeBeerID, int recipePreparationTime);

    int beerID() const;
    int preparationTime() const;
    vector<Ingredient *> getListIngredient();

public slots:

    void setBeerID(int beerID);
    void setPreparationTime(int preparationTime);
    void addIngredient(Ingredient* ingredient);
    void deleteIngredient(Ingredient* ingredient);


signals:
    void beerIDChanged(int beerID);
    void preparationTimeChanged(int preparationTime);
};

#endif // RECIPE_H
