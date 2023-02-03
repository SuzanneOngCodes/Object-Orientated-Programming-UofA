#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
public:
    person();
    person(std::string myName,int Salary); // a name and salary must be provided to create a person
    void setName(std::string myName);      // change the person's name
    std::string getName();
    void setSalary(int mySalary);     // change the person's salary
    int getSalary();
    std::string name;
    int money;
    ~person();
};

#endif
