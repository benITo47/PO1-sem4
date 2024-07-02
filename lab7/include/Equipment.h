#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include<iostream>
class Equipment 
{
    public:
        int dmg;
        int durability;
        virtual std::string GetItemName()=0;
    private:
};


class Sword: public Equipment 
{
    public:
     
        Sword()
        {
            std::cout<< "Sword created.\n";
            dmg = 100;
            durability = 50;
        }

        std::string GetItemName() override
        {
            return "Sword";
        }
    private:
};

class Staff: public Equipment 
{
    public:
   
        Staff()
        {
            std::cout<< "Staff created.\n";
            dmg = 75;
            durability = 100;
        }
        
        std::string GetItemName() override
        {
            return "Staff";
        }
    private:
};

class Lockpick: public Equipment 
{
    public:
            
        Lockpick()
        {
            std::cout<< "Lockpick created.\n";
            dmg = 1;
            durability = 15;
        }
        
        std::string GetItemName() override
        {
            return "Lockpick";
        }
    private:
};
#endif
