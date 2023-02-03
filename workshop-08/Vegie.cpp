# include "Animal.h"
# include <string>
#include <vector>
# include "Vegie.h"

using namespace std;

// Why can't this work ? Vegie::Vegie(string aSpecies):species(aSpecies){}

Vegie::Vegie(string aSpecies):Animal(aSpecies){
    vegetable = "Grass";
}

void Vegie::set_favourite_food(string aVegie){
    vegetable = aVegie;
}

string Vegie::getFavouriteFood(){
    return vegetable;
}

