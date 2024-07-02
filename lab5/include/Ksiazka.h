#ifndef KSIAZKA_H
#define KSIAZKA_H

#include "IKsiazka.h"

class Ksiazka: public IKsiazka 
{
    public:

    /// @brief Konstrukotr
    /// @param tytul Tytul
    /// @param autor Autor
    /// @param id ID
    /// @param gatunek Gatunek
    /// @param nrPolki Numer Połki
    Ksiazka(std::string tytul, std::string autor, int id, std::string gatunek);
    private:
};

#endif
