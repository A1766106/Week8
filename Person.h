#ifndef PERSON_H
#define PERSON_H
#include "Player.h"

class Person: public Player {
    Person();
    void move();                    //allow user to type in a single character to
                                   //represent their move. If a move is impossible,
                                   //“Move unavailable” is outputted and the user is
                                   //asked to input a character again.
                                   //Otherwise, their input is stored

};


#endif 