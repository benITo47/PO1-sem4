#ifndef PLAYER_H
#define PLAYER_H

#include"GameObject.h" 
#include "Renderable.h"
#include "Collidable.h"

class Player : public GameObject, public Collidable, public Renderable 
{
    public:

    //Constructor
    Player();
    //Constructor overloaded
    Player(std::string N);
    //Performs action
    void action() override;

    private:
};

#endif
