#ifndef UPDATABLE_H
#define UPDATABLE_H

#include <iostream> 
class Updatable
{
    public:
    virtual ~Updatable() = default; 

    //Updates the Updatable
    virtual void update()
    {
        std::cout << "Updating object" << std::endl;
    } 
};


#endif
