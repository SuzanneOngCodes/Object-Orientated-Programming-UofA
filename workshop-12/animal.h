#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class animal{
public:
    animal(string n, int v) ;  // creates an animal with name n and body volume v.
                               // animals are allocated a unique ID on creation
    void set_name(string pname);
    virtual string get_name() = 0 ;
    void set_volume(int pvolume);
    int get_volume();
    int get_animalID();
    virtual ~animal();

protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID

private:
    int volume ;               // the volume of the animal's body
};
#endif
