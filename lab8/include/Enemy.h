#ifndef ENEMY_H
#define ENEMY_H
#include"GameObject.h" 
#include "Renderable.h"
#include "Collidable.h"
class Enemy: public GameObject, public Collidable, public Renderable 
{
    public:

    //Constructor
    Enemy();
    //Constructor overloaded
    Enemy(std::string N);

    //Performs action
    void action() override;

    private:
};

#endif
