# include "vegie.h"
#include <string>
#include "animal.h"
using namespace std;

int vegie::nextID = 100;

vegie::vegie(string n,int v):animal(n,v){
    favourite_food = "grass";
    animalID = nextID++;
}

void vegie::set_favourite_food(string vfavourite_food){
    favourite_food = vfavourite_food;
}

string vegie::get_favourite_food(){
    return favourite_food;
}

string vegie::get_name(){
	return "Safe: " + name ; 
}

vegie::~vegie(){
}
