#ifndef INGREDENT_H
#define INGREDENT_H
#define MYNULL = 0


#include <string>
#include <string>
using namespace std;

class Ingredient
{
	public :

		Ingredient();
		Ingredient(string name);
		string to_string() const;

	private :

		string name;
		enum type {NOTHING, HOUBLON, BLE};

};

#endif //INGREDENT_H

