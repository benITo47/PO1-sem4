#ifndef KOMIKS_H
#define KOMIKS_H

#include "IKsiazka.h"

class Komiks: public IKsiazka 
{
    public:

    /// @brief Konstrukotr
    /// @param tytul Tytul
    /// @param autor Autor
    /// @param id ID
    /// @param wydawca Wydawca 
    /// @param gatunek Gatunek
    /// @param nrPolki Numer Połki
    Komiks(std::string tytul, std::string autor, int id, std::string wydawca, std::string gatunek);



    /// @brief Konstrukotr
    /// @param tytul Tytul
    /// @param autor Autor
    /// @param id ID
    /// @param gatunek Gatunek
    /// @param nrPolki Numer Połki
    Komiks(std::string tytul, std::string autor, int id, std::string gatunek);

    private:
    std::string Wydawca; 
};

#endif
