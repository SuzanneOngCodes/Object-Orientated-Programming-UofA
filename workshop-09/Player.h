# ifdef Player_h
# define Player_h

# include <iostream>
# include <string>

using namespace std;

class Player{
public:
    Player();
    virtual void move() = 0 ;
    virtual string getMoves() = 0 ;
    char getMove(); //returns the most recent move made
    bool win(Player * opponent); //compares players’ moves to see who wins
    // Must add virtual in destructor in parent class
    virtual ~Player();
    
    int number_of_moves;
    char recent_moves;
};
#endif
