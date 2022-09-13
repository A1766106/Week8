#include "Computer.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

    Computer::Computer(string letter)
    {
        this->letter = letter;
        if(this->letter != "r" || this->letter != "R" || this->letter != "p" || this->letter != "P" || this->letter != "s" || this->letter != "S")
        {
            this->letter = "r";
        }
        recent_Move = letter[0];
        Moves[numMoves] = recent_Move;
        numMoves = numMoves + 1;
    }
    void Computer::move()
    {
        Moves[numMoves] = recent_Move;
        numMoves = numMoves + 1;
    }