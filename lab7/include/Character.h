#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream> 
#include <string>
#include "State.h"
#include "Equipment.h"
class Character 
{
    public:

    Character(std::string name);

    //Equips given item;
    virtual void equip(Equipment* item) = 0;

    //Sets a state of the character to input state
    void set_state(State::StateType state);


    //Returns the name of the character
    virtual std::string GetName();


    //Returns state of the character
    virtual State::StateType get_state();

    //Return proffesion/class name
    virtual std::string GetProffesion() = 0;


    //Return the name of the item the character has equiped 
    std::string getEquipedItemName();
    protected:

    std::string Name;
    State currentState;
    Equipment* equipment;

    private:
};

#endif
