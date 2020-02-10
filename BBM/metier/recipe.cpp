#include "header/recipe.h"


Recipe::Recipe()
{

}

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
