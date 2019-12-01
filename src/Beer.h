#ifndef BEER_H
#define BEER_H

#include <string.h>
#include <string>
#include <string>
using namespace std;

class Beer
{
public : 
	Beer();
	Beer(/*Q*/string name, float alcoholLevels, float IBU, float density, float color);

private:
	/*Q*/string name;
	float alcoholLevels;
	float IBU;
	float density;
	float color;


};
#endif //BEER_H
