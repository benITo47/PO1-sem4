#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <iostream> 

class GameObject
{
    public:

    virtual void render() const
    {
        std::cout << "Rendering GameObject" << std::endl;
    }

    virtual ~GameObject(){}

};


#endif 
