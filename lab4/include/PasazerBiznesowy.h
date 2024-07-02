#ifndef PASAZERBIZNESOWY_H
#define PASAZERBIZNESOWY_H

#include "IPasazer.h"

class PasazerBiznesowy: public IPasazer
{
    private:
    int StanKonta;

    public:

    //KONSTRUKTOR
    PasazerBiznesowy(std::string name, std::string surname, std::string number, int amount):IPasazer(name,surname,number), StanKonta(amount)
    {

    }

    //PRZELADOWANIE FUNKCJI Z KLASY RODZICA
    virtual void przedstawSie() const override
    {
        std::cout<<"Jestem pasażerem biznesowym.\n";
        IPasazer::przedstawSie();
        std::cout << "Stan konta: " << StanKonta << "\n"<<std::endl;
    }

};


#endif