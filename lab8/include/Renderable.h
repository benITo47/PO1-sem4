#ifndef RENDERABLE_H
#define RENDERABLE_H
#include"Updatable.h" 
class Renderable: virtual public Updatable
{   
    protected: 
    //Constructor
    virtual ~Renderable() = default; 

    //Render - to be overloaded for desired behaviour
    virtual void render()
    {
        std::cout << "Rendering object" << std::endl; 
    }
};

#endif
