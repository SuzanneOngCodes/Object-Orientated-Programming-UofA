# include "Animal.h"
# include <string>

using namespace std; 

int Animal::currentID = 0;

Animal::Animal(){
    
}

Animal::Animal(std::string aSpecies){
    species = aSpecies;
    currentID++;
}

void Animal::set_name(std::string aName){
    name = aName;
}

std::string Animal::get_species(){
    return species;
}

std::string Animal::get_name(){
    return name;
}

int Animal::get_ID(){
    return currentID;
}

Animal::~Animal(){
    
}