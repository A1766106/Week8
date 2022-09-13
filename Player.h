#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

class Player {

    public:
        char *Moves;
        char recent_Move;
        int numMoves;
        Player();
        Player *opponent;
        virtual void move() = 0;
        std::string getMoves();
        char getMove(); //returns the most recent move made
        bool win(Player * opponent); //compares players’ moves to see who wins

};


#endif