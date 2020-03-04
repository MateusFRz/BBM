#include "header/recipe.h"

Recipe::Recipe(int recipeBeerID, int recipePreparationTime) : m_beerID(recipeBeerID), m_preparationTime(recipePreparationTime)
{

}

int Recipe::beerID() const
{
    return m_beerID;
}

int Recipe::preparationTime() const
{
    return m_preparationTime;
}

vector<Ingredient *> Recipe::getListIngredient()
{
    return listIngredient;
}

void Recipe::setBeerID(int beerID)
{
    if (m_beerID == beerID)
        return;

    m_beerID = beerID;
    emit beerIDChanged(m_beerID);
}

void Recipe::setPreparationTime(int preparationTime)
{
    if (m_preparationTime == preparationTime)
        return;

    m_preparationTime = preparationTime;
    emit preparationTimeChanged(m_preparationTime);
}

void Recipe::addIngredient(Ingredient *ingredient)
{
    listIngredient.push_back(ingredient);
}

void Recipe::deleteIngredient(Ingredient *ingredient)
{
    for (int i = 0; i < listIngredient.size(); ++i) {
        if (listIngredient[i] == ingredient)
            listIngredient.erase(listIngredient.begin()+i);
    }
}

