#include "Character.h"

    Character::Character(std::string name):Name(name), currentState(State::Idle){}

   void Character::set_state(State::StateType state)
    {
        currentState.setState(state);
    }

    std::string Character::GetName()
    {
        return Name;
    }

    State::StateType Character::get_state()
    {
        return currentState.getState();
    }


    std::string Character::getEquipedItemName()
    {
        return equipment->GetItemName();
    }