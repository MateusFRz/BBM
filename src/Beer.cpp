#include "Beer.h"

Beer::Beer() : name("Aucun nom")
{
}

Beer::Beer(/*Q*/string name, float alcoholLevels, float IBU, float density, float color) : name(name), alcoholLevels(alcoholLevels), IBU(IBU), density(density), color(color)
{
}
