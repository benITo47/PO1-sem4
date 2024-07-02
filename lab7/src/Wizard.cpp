#include "Wizard.h"

Wizard::Wizard(std::string name): Character(name){}

    std::string Wizard::GetProffesion() 
    {
        return "Wizard";
    }
    void Wizard::equip(Equipment* item) 
    {
        if(Staff* staff = dynamic_cast<Staff*>(item))
        {
            equipment = item;
        }
    }