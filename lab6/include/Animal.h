#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream> 

class Animal 
{
    public:

    //Function for makingSounds
    virtual void makeSound() = 0;

    //Funcion for eating
    virtual void eat() = 0;

    //Function for sleeping
    virtual void sleep();

    //Function for getting animal specie name
    virtual std::string GetName();

    //Function for using skills
    virtual void useSkill() = 0;

    //Function for fun interactions with other animals
    virtual void interact(Animal* other) = 0;

    //Destructor - only to appease the compilator so it doesn't show warnings
    virtual ~Animal(){}
    private:
};

#endif
