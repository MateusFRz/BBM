#include "Ingredient.h"
#include <iostream>
using namespace std;

Ingredient::Ingredient() : name("Aucun nom")
{
}



Ingredient::Ingredient(string name) : name(name)
{ 
}

string Ingredient::to_string() const
{
	return name;
}
