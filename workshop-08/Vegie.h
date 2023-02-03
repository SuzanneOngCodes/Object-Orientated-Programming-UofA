#ifndef VEGIE_H
#define VEGIE_H
#include <string>
#include "Animal.h"

using namespace std;

class Vegie:public Animal
{
public:
    Vegie(string aSpecies);  // create a vegie of the given species, its favourite food is "Grass"
    void set_favourite_food(string aVegie); // change the vegie's favourite food
    string getFavouriteFood();
    string vegetable;
};

#endif
