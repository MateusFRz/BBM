#ifndef RECIPE_H
#define RECIPE_H

#include "Ingredient.h"
#include <string>
using namespace std;

class Recipe
{
public:
	Recipe();

private:
	/*Q*/string name;
	//liste d'ingr�dient
	float preparationTime;

};

#endif // !RECIPE_H