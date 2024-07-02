#include "Lot.h"



void Lot::rezerwujBilet(IPasazer* pasazer)
{
    pasazerowie.push_back(pasazer);
}

std::string Lot::getNumerLotu()
{
    return FlightNumber;
}

void Lot::zwolnijPojedynczegoPaszera(std::string number)
{
    for(int i = 0; i < pasazerowie.size(); i++)
    {
        if(number == pasazerowie[i]->GetNumber())
        {
            delete pasazerowie[i];
        pasazerowie.erase(pasazerowie.begin() + i);
        }
    }
}
void Lot::wyswietlRezerwacje()
{
    for(auto pasazer: pasazerowie)
    {
        pasazer->przedstawSie();
    }
}

void Lot::zwolnijWszystkichPaszazerow()
{
    for(auto pasazer: pasazerowie)
    {
        delete pasazer;
    }
}