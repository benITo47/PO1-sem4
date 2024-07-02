#include "Tiger.h"


    void Tiger::makeSound()  {
        std::cout << "Tiger growls" << std::endl;
    }
    void Tiger::eat()  {
        std::cout << "Tiger eats meet" << std::endl;
    }

    std::string Tiger::GetName()  {
        return "Tiger";
    }

    void Tiger::useSkill()  
    {
        std::cout<< "Tiger uses Flare Blitz skill " << std::endl;
    }

    void Tiger::interact(Animal* other)  
    {
        std::cout << "Tiger stares at " << other->GetName() << std::endl;
    }
