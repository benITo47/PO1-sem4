#include "Thief.h"

    Thief::Thief(std::string name): Character(name){}

    std::string Thief::GetProffesion()  
    {
        return "Thief";
    }

    void Thief::equip(Equipment* item) 
    {
        if(Lockpick* lockpick = dynamic_cast<Lockpick*>(item))
        {
            equipment = item;
        }
    }