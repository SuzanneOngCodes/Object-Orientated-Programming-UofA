# ifndef HUNTER_H
# define HUNTER_H
# include <string>
# include "Animal.h"
# include <vector> // Libraries

using namespace std; 

class Hunter:public Animal
{
public:
    Hunter();
    Hunter(string aSpecies);         // create a hunter of the given species
    void record_kill(string kill);   // add a new kill to the end of the hunter's list of kills
    int numberOfKills();             // how many kills have been recorded
    
    // ALTERNATIVE TO STRING
    vector<string> get_kills();            // return an array of all kills by this hunter
    ~Hunter();
private:
    // DO NOT PUT "int number_of_killing = 0" in the header file, put in the constructors instead
    // int number_of_killing;
    // Vector usage = no need to initialise in this case, but do that if you know the size
    vector<string> killed_animals; // return a vector of all kills by this hunter
                                   // OR string *killed_animals = new string [100];

};

# endif
// When the main wanna get the object that is not inside the class itself, use setter and getter
