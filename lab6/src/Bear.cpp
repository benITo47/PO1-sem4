#include "Bear.h"

void Bear::makeSound()  {
        std::cout << "Bear grunts" << std::endl;
    }
    void Bear::eat()  {
        std::cout << "Bear eats fish" << std::endl;
    }

    std::string Bear::GetName()  {
        return "Bear\n";
    }

    void Bear::useSkill()  
    {
        std::cout<< "Bear uses Belly Drum skill" << std::endl;
    }

    void Bear::interact(Animal* other)  
    {
        std::cout << "Bear grunts at " << other->GetName() << std::endl;
    }