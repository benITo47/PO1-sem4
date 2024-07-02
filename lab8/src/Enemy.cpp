#include "Enemy.h"


Enemy::Enemy():GameObject("Unnamed Enemy"){}

Enemy::Enemy(std::string N):GameObject(N){}

    
void Enemy::action() 
{   
    std::cout << "Performing enemy-specific action for " << Name() <<": \n";
   Renderable::render();
   Collidable::collide();
   Updatable::update(); 
}