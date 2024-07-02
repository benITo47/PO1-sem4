#ifndef PASAZEREKONOMICZNY_H
#define PASAZEREKONOMICZNY_H

#include "IPasazer.h"

class PasazerEkonomiczny: public IPasazer
{
    public:

    //KONSTRUKTOR
    PasazerEkonomiczny(std::string name, std::string surname, std::string number):IPasazer(name,surname,number){}


//PRZELADOWANIE FUNKCJI Z KLASY RODZICA
    virtual void przedstawSie() const override
    {
        std::cout << "Jestem pasażerem ekonomicznym.\n";
        IPasazer::przedstawSie();
        std::cout<<std::endl;
    }
};

#endif
