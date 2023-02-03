# include "Player.h"
# include <iostream>
# include <string>

using namespace std;

Player::Player(){
    number_of_moves = 0 ;
}

char Player::getMove(){
    return recent_moves;
}

bool Player::win(Player *opponent){
    if (opponent[0].recent_moves == opponent[1].recent_moves){
        cout << "Draw again!" << endl ;
    }else if (opponent[0].recent_moves == 's' && opponent[1].recent_moves == 's')
}
 Player::~Player(){
}

// NULL = 0 ;
// for (;;){} (Set as a loop)
