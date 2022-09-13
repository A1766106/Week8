#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>
#include <iostream>

class Computer: public Player {
    public:
        std::string letter;
        Computer(std::string letter);                       //set what move the computer will
                                               //make (rock, paper, or scissors)
                                               //if the input is not r, R, p, P, s, S or
                                               //a string starting with one of these letters,
                                               //set the move to the default ‘r’

    void move();                                    //increments number of moves made 

};
#endif