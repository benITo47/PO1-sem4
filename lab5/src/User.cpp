#include "User.h"


User::User(std::string ImieNazwisko):Imie(ImieNazwisko){}


void User::putOnShelf(std::string zamiar, const IKsiazka* ksiazka)
{
    if(zamiar == "Chcę przeczytać")
    {
        ToRead.push_back(ksiazka);
    }
    if(zamiar == "Przeczytałem")
    {
        Przeczytane.push_back(ksiazka);
    }
}


std::string User::getName()
{
    return Imie;
}


void User::displayPersonalBookshelf()
{
    std::cout << "Chcę przeczytać:\n";
    for(auto elem: ToRead)
    {
        std::cout << "- " << elem->getTitle() << "\n";
    } 
    std::cout << "Przeczytałem: \n";
    for(auto elem: Przeczytane)
    {
        std::cout << "- " << elem->getTitle() << "\n";
    } 
}

const IKsiazka* User::canRate(std::string title)
{
    for(auto elem: Przeczytane)
    {
        if(title == elem->getTitle())
        {
            return elem;
        }
    }
    return nullptr;
}