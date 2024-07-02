#include "Lion.h"

void Lion::makeSound()  {
        std::cout << "Lion roars" << std::endl;
    }
    void Lion::eat()  {
        std::cout << "Lion eats meet" << std::endl;
    }

    std::string Lion::GetName()  {
        return "Lion";
    }

    void Lion::useSkill()  
    {
        std::cout<< "\nLion uses Hyper Voice skill" << std::endl;
    }

    void Lion::interact(Animal* other)  
    {
        std::cout << "Lion roars at " << other->GetName() << std::endl;
    }
