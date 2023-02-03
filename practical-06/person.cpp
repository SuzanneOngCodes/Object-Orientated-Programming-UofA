#include "person.h"
#include <string>

using namespace std;

person::person()
{
    money= 4000;
}

person::person(string myName,int Salary)
{
    name = myName;
    money= Salary;
}

void person::setName(string myName)
{
    name = myName;
}

void person::setSalary(int mySalary)
{
    money = mySalary;
}

string person::getName()
{
    return name;
}

int person::getSalary()
{
    return money;
}

person::~person()
{
}
