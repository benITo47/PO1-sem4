#ifndef THIEF_H
#define THIEF_H


#include "Character.h"

class Thief : public Character
{
    public:


    //Constructor
    Thief(std::string name);


    //Returns proffesion name - this case "Thief"
    std::string GetProffesion() override;


    //Equips given item
    void equip(Equipment* item) override;
    
    private:
};

#endif
