# include "Animal.h"
# include <string>
# include <vector>
# include "Hunter.h"

using namespace std; 

Hunter::Hunter(){
}

Hunter::Hunter(string aSpecies):Animal(aSpecies){
}

void Hunter::record_kill(string kill){
    killed_animals.push_back(kill);
//  No need number_of_killing++; or delete[] array;
}

int Hunter::numberOfKills(){
    return killed_animals.size();
}

// VECTOR STYLE
vector<string> Hunter::get_kills(){
    return killed_animals;
}

Hunter::~Hunter(){
}
