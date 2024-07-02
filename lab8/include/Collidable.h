#ifndef COLLIDABLE_H
#define COLLIDABLE_H
#include"Updatable.h" 
class Collidable: virtual public Updatable
{   
    protected: 
    virtual ~Collidable() = default; 


    //Handles the collision of the Collidable - to be overriden for future use cases
    virtual void collide()
    {
        std::cout << "Handling collision" << std::endl;
    }
};   
#endif
