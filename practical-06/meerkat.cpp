#include <iostream>
#include "meerkat.h"

using namespace std;

// implementation of the default meerkat constructor
meerkat::meerkat()
{
}

void meerkat::setName(string meerName)
{
    name=meerName;
}

void meerkat::setAge(int meerAge)
{
    age=meerAge;
}

// implementation of a meerkat setName function taking a name
string meerkat::getName()
{
    string actual_name=name;
    return actual_name;
}

// implementation of a meerkat setAge function taking a age
int meerkat::getAge()
{
    int actual_age=age;
    return actual_age;
}

// implementation of the default meerkat destructor
meerkat::~meerkat()
{
}
