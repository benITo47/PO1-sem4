#ifndef WARRIOR_H
#define WARRIOR_H
#include "Character.h"
class Warrior : public Character
{
    public:


    //Construcotr
    Warrior(std::string name);

    //Returns proffesion name - this case "Warrior"
    std::string GetProffesion() override;

    //Returns Name of the character - in thsi case wit "\n" in front of the name
    std::string GetName() override;
    //Equips given name
    void equip(Equipment* item) override;
    private:
};

#endif
