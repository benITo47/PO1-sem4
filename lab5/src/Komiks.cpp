#include "Komiks.h"

Komiks::Komiks(std::string tytul, std::string autor, int id, std::string wydawca, std::string gatunek) : IKsiazka(tytul, autor, id, gatunek), Wydawca(wydawca) {}

Komiks::Komiks(std::string tytul, std::string autor, int id, std::string gatunek) : IKsiazka(tytul, autor, id, gatunek), Wydawca("") {}
