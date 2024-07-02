#ifndef USER_H
#define USER_H

#include <iostream> 
#include "IKsiazka.h"
#include <vector>
#include <map> 

class User 
{
    public:

    //Konstruktor Usera
    User(std::string ImieNazwisko);
    

    //Dodaje ksiazke usera do odpowiedniego vectora based on zamiar
    void putOnShelf(std::string zamiar, const IKsiazka* ksiazka);
    

    //getter function
    std::string getName();

    //Wypisuje ksiazki przezytane i na liscie do przeczytania
    void displayPersonalBookshelf();

    // Sprawdza, czy uzytkownik moze ocenic ksiazke - jesli przeczytal tak, jesli nie - to nie
    const IKsiazka* canRate(std::string title);

    private:

    std::string Imie;
    std::vector<const IKsiazka*> ToRead;
    std::vector<const IKsiazka*> Przeczytane;

};

#endif
