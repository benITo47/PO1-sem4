#include "Warrior.h"

    Warrior::Warrior(std::string name): Character(name){}

    std::string Warrior::GetProffesion() 
    {
        return "Warrior";
    }
     std::string Warrior::GetName()  
    {
        return "\n" + Name;
    }
    void Warrior::equip(Equipment* item) 
    {
        if(Sword* sword = dynamic_cast<Sword*>(item))
        {
            equipment = item;
        }
    }