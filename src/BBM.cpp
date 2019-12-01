// BBM.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Ingredient.h"
int main()
{
	Ingredient ingredient("Pates");
	cout << ingredient.to_string() << endl;
	return 0;
}

