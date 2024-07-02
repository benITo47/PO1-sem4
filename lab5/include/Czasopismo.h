#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include "IKsiazka.h"

class Czasopismo: public IKsiazka 
{
    public:
    /// @brief Konstruktor
    /// @param tytul Tytul
    /// @param autor Autor
    /// @param id ID
    /// @param gatunek Gatunek 
    /// @param nrPolki Numer Połki
    Czasopismo(std::string tytul, std::string autor, int id, std::string gatunek);
    private:
};

#endif
