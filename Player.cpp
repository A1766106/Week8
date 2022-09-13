#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(){
  recent_Move = 'r';
  numMoves = 0;
}
std::string Player::getMoves()
{  
    return Moves;
}
char Player::getMove()
{
  return recent_Move;
}
bool Player::win(Player * opponent)
{
  char recent = recent_Move;
  char op = opponent->getMove();

  if((recent == 'r' && op == 's') || (recent == 's' && op == 'p') || (recent == 'p' && op == 'r'))
  {
    return true;
  }
  return false;
}