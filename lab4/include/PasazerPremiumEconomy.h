#ifndef PASAZERPREMIUMECONOMY_H
#define PASAZERPREMIUMECONOMY_H

#include "IPasazer.h"

class PasazerPremiumEconomy: public IPasazer
{
    private:
    bool isVIP;
    public:

    //KONSTRUKTOR
    PasazerPremiumEconomy(std::string name, std::string surname, std::string number, bool VIP):IPasazer(name,surname,number), isVIP(VIP)
    {
        
    }
    //PRZELA
    DOWANIE FUNKCJI Z KLASY RODZICA
    virtual void przedstawSie() const override
    {
        std::cout<<"Jestem pasażerem Premium Economy.\n";
        IPasazer::przedstawSie();
        std::cout << (isVIP ? "Posiadam dostęp do Salonu VIP.\n" : " Nie posiadam dostępu do Salonu VIP.\n")<< std::endl;
    }

};
#endif //PASAZERPREMIUMECONOMY_H
