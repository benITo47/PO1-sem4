#include "Player.h"


Player::Player():GameObject("Unnamed Player"){}

Player::Player(std::string N):GameObject(N){}

void Player::action() 
{   
 std::cout << "Performing player-specific action for " << Name() <<": \n";
 Renderable::render();
 Updatable::update(); 
}