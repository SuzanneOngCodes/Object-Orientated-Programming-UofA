#include "animal.h"
#include "zoo.h"
#include "hunter.h"
#include "vegie.h"

#include <iostream>

using namespace std;

zoo::zoo(string n,int cows,int lions){
    name = n ;
    number_of_animals = cows + lions ;
    // Do not initialise unless you want the pointer value 
    animals = new animal*[number_of_animals];
    int capacity = 0;
    for (int i = 0 ; i < cows ; i++){
        // Be careful with the pointers 
        animals [capacity] = new vegie("Daisy", 100);
        capacity++;
    }
    for (int i = 0 ; i < lions ; i++){
        animals[capacity] = new hunter("Clarence", 50);
        capacity++;
    }
}

string zoo::get_name(){
    return name;
}

int zoo::get_number_of_animals(){
    return number_of_animals;
}

animal** zoo::get_animals(){
    return animals;
}

zoo::~zoo(){
}