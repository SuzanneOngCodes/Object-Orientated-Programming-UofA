#include "hunter.h"
#include "animal.h"
#include <string>
using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v):animal(n,v){
    kills = 0 ;
    animalID = nextID++;
}

void hunter::set_kills(int pkills){
    kills = pkills;
}

int hunter::get_kills(){
    return kills;
}

string hunter::get_name(){
	return "Hunter: "+ name; 
}

hunter::~hunter(){
}
