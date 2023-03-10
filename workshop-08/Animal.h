# ifndef ANIMAL_H
# define ANIMAL_H
# include <string>


using namespace std; 

class Animal{
    public:
    Animal();
    Animal(string aSpecies) ;       // animals are allocated a unique ID on creation, the first animal has ID 1, the second animal is 2 and so on
    void set_name(string aName);     // change the animal's name
    string get_species();      
    string get_name();
    int get_ID();                    // the animal's unique ID
    ~Animal();
    static int currentID ;  // the next id number to give out
    string name; 
    string species;

};

# endif
