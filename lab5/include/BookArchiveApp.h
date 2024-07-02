#ifndef BOOKARCHIVEAPP_H
#define BOOKARCHIVEAPP_H

#include <iostream>
#include <vector>
#include "IKsiazka.h"
#include "User.h"
#include <algorithm>
class BookArchiveApp 
{
    public:

    //Konstruktor
    BookArchiveApp();

    //Dodaje ksiazke do bazy 
    void addMaterialToBase(IKsiazka* material);

    //Dodaje ksiazke do biblioteczki uzytkownika
    void putOnBookshelf(std::string tytul, User& user, std::string Status);

    //Dodaje ocene ksiazki
    void rateBook(std::string tytul, User& user, float ocena);

   
    //Wyswietla informacje o wszystkich ksiazkach w bazie danych
    void displayAllBooks();

    //Destruktor - tutaj zwalniamy pamiec zarezerwowana dla IKsiazka - Worth noting - uzytkownik mimo, ze otrzymuje wskazniki do ksiazek, bo tak zoragnizowalem swoj kod - to nie jest wlascicelem tej pamieci. Za jej zwolenieni odpowaida klasa BookArchiveApp
    ~BookArchiveApp();
    private:

    std::vector<IKsiazka*> Ksiazki;
};

#endif
