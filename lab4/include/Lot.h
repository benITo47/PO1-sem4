#ifndef LOT_H
#define LOT_H

#include "IPasazer.h"


class Lot
{
    private:
    std::vector<IPasazer*> pasazerowie; 
    std::string FlightNumber;
    std::string FlightDate;
    std::string Destination; 
    std::string Origin;
    public:

    //KONSTRUKTOR
    Lot(std::string num, std::string date, std::string origin, std::string dest): FlightNumber(num), FlightDate(date), Destination(dest),Origin(origin)
    {

    }

    //FUNKCJA DODAJE WSKAZNIK DO WEKTORA WSKAZNIKOW IPasazer
    void rezerwujBilet(IPasazer* pasazer);
    
    //FUNKCJA ZWRACA NUMER LOTU
    std::string getNumerLotu();

    //FUNKCJA ZWALNIA POJEDYNCZEGO PASAZERA - USUWA GO NAJPIERW Z PAMIECI, A NASTEPNIE Z WEKTORA
    void zwolnijPojedynczegoPaszera(std::string number);

    //WYWOLUJE ->przedstawSie(), DLA KAZDEGO WSKAZNIKA W WEKTORZE PASAZEROWIE
    void wyswietlRezerwacje();

    //FUNKCJA USUWA WSZYSTKICH PASAZEROW Z PAMIECI
    void zwolnijWszystkichPaszazerow();
};


#endif