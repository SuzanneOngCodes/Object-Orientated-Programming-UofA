#include "animal.h"
#include <string>
using namespace std;

animal::animal(string n, int v){
    name = n ;
    volume = v;
}

void animal::set_name(string pname){
    name = pname;
}

void animal::set_volume(int pvolume){
    volume = pvolume;
}

int animal::get_volume(){
    return volume;
}

int animal::get_animalID(){
    return animalID;
}

animal::~animal(){}