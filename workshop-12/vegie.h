#ifndef VEGIE_H
#define VEGIE_H

#include <string>
#include "animal.h"
using namespace std;

class vegie : public animal{
private:
    static int nextID ;
    string favourite_food ;     // the vegie's favourite food, initialise to "grass"
public:
    vegie(string n,int v);      // create a vegie with name n and body volume v
    void set_favourite_food(string vfavourite_food);
    string get_favourite_food();
    string get_name();
    ~vegie();
};
#endif
