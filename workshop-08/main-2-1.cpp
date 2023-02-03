# include "Animal.h"
# include <string>
# include "Hunter.h"
# include <iostream>

using namespace std; 

int main(){
    Hunter A("Croc");
    A.record_kill("Tiger");
    A.record_kill("Layer");
    int number = A.numberOfKills();
    vector<string> ani = A.get_kills();
    // IN VECTOR FORM INSTEAD OF SIZE
    for (int i =0 ; i< ani.size(); i++){
        cout<< ani.at(i) << endl; //size not sizeof because it would provide the size of the bytes
    }
    return 0;
}

// myvector.at(myvector.size() .1)
// All variables should be private
//
