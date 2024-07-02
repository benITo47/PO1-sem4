#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion: public Animal 
{

     public:

    
    //Function for makingSounds
    void makeSound() override ;

    //Funcion for eating
    void eat() override ;

    //Function for getting animal specie name
    std::string GetName() override;

    //Function for using skills
    void useSkill() override ;

    //Function for fun interactions with other animals
    void interact(Animal* other) override ;
    private:
};

#endif
