#include "Wizard.h"
#include <iostream>

Wizard::Wizard (std::string aname, int height ) : Person(aname, height){
    spell = 2;
    name = 'b';
}

void Wizard::castSpell(){
    if (spell > 0){
        std::cout << "Zap!"<<std::endl;
        spell--;
    }else{
        std::cout<<"Not enough"<<std::endl;
    }
    }
}