#include "Player.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person(){}

void Person::move()
{
        cout << "Please enter move: ";
        cin >> recent_Move;
        while(recent_Move != 'r' && recent_Move != 'R' && recent_Move != 'p' && recent_Move!= 'P' && recent_Move != 's' && recent_Move != 'S')
        {
            cout << "Please enter valid move: ";
            cin >> recent_Move;
        }
        numMoves = numMoves +1;
        Moves[numMoves] = recent_Move;
}

