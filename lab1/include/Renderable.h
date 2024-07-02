#ifndef RENDERABLE_H
#define RENDERABLE_H
#include <iostream> 

class Renderable
{
    public:

    virtual void draw() const                               // Function "draws" the object
    {
        std::cout << "Drawing Renderable" << std::endl; 
    }

    virtual ~Renderable(){}         //Virtual Destructor 


};


#endif