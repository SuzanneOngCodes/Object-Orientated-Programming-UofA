# include "Animal.h"
# include <string>

using namespace std; 

int main(){
    Animal elephant,cheetah;
    elephant = Animal("Elephant");
    cheetah = Animal("Cheetah");
    string what = elephant.get_species();
    elephant.set_name("Amy");
    cheetah.set_name("Larry");
    string what_name = elephant.get_name();
    int elephantID = elephant.get_ID();
    int cheetahID = cheetah.get_ID();
    return 0;
}