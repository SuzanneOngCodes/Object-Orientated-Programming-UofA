#include <iostream>
#include "Market.h"

using namespace std;

Market::Market(){
}

void Market::setName(string marName){
    name = marName;
}

string Market::getName(){
    return name;
}

void Market::setAge(int merAge){
    age = merAge;
}

int Market::getAge(){
    return age;
}

Market::~Market(){

}

