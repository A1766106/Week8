#include "Player.h"
#include "Computer.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Player *Max= new Person();
    Player *AI = new Computer("h");

    while(true)
    {
        Max->move();
        AI->move();

        if(Max->win(AI)) {
            cout << "Max Wins" << endl;
            break;
        }
        else if(AI->win(Max))
        {
            cout << "AI Wins" << endl;
            break;
        }
        else
        {
            cout << "It's a draw" << endl;
        }
    }

    return 0;
}

string convertChar(char d)
{
    switch (d)
    {
        case 'r':
            return "rock";
            break;
        case 'p':
            return "paper";
            break;
        case 's':
            return "scissors";
            break;
        default:
            break;
    }
    return "";
}