#ifndef WIZARD_H
#define WIZARD_H
#include "Character.h"

class Wizard : public Character
{
    public:

    //Constructor
    Wizard(std::string name);

    //Returns the Proffesion name - in this case "Wizard"
    std::string GetProffesion() override;

    //Equips provided item
    void equip(Equipment* item) override;

    private:
};

#endif
