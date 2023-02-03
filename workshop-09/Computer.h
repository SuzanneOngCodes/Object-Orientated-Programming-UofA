# ifdef Computer_h
# define Computer_h

# include "Player.h"
# include <iostream>
# include <string>

using namespace std;

class Computer:public Player{
public:
    Computer();
    Computer(string letter);                       //set what move the computer will make (rock, paper, or scissors)
                                                   //if the input is not r, R, p, P, s, S or
                                                   //a string starting with one of these letters,
                                                   //set the move to the default ‘r’
    string getMoves() override;                             //returns all moves stored in a string
    void move() override;                                   //increments number of moves made
    ~Computer();

};
#endif
