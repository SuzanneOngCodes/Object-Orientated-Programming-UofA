# include "Player.h"
# include "Computer.h"
# include <iostream>
# include <string>

using namespace std;

Computer::Computer(){
    recent_moves = 'r';
}

Computer::Computer(string letter):Player(){
    if (letter == 'r'||letter == 's' ||letter == 'p' || letter == 'R'||letter == 'S' ||letter == 'P'){
        recent_moves = letter;
    }else{
        cout<<"Invalid letter"<<endl;
    }
}

string Computer::getMoves(){
    string s = "";
    s = s + recent_moves;
    return s ;
}

void Computer::move(){
    number_of_moves++;
}

Computer::~Computer(){
}

int main(){
    
}

int main (){
    Jo->move();
    Jo->getMove();
    Jo->getMoves();
    Computer *comp = new Computer();
    
    if(Jo >win(comp)){
        cout<<"Joe wins"
    }else{
        cout<<"Joe wins"
    }
    return 0;
}
