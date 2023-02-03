# include "Player.h"
# include <iostream>
# include <string>

using namespace std;

Person::Person(){
}

void Person::move():Player{
    while (recent_moves != 'r' || recent_moves != 'p' || recent_moves != 's' || recent_moves != 'R' || recent_moves != 'P' || recent_moves != 'S'){
        cout << "Invalid input. Try again! "
        cin >> recent_moves ;
    }
    moves[number_of_moves] = recent_moves;
}

string Person::getMoves(){
    string str(moves);
    return str;
}

Person::~Person(){
}
