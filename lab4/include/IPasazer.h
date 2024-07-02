#ifndef IPASAZER_H
#define IPASAZER_H

#include<iostream>
#include<vector>
#include<string>

class IPasazer
{
    protected:
    std::string Name;
    std::string SurName;
    std::string CardNumber;

    public:

    //KONSTRUKTOR

    IPasazer(std::string name, std::string surname, std::string number):Name(name), SurName(surname),CardNumber(number){}

    //FUNKCJA WYPISUJE NA EKRAN, DANE ZAWARTE W DZIALE PROTECTED:, W OKRESLONY SPOSOB
    virtual void przedstawSie() const 
    {
        std::cout<< "Mam na imię: " << Name <<" " << SurName << " i moj nr karty kredytowej to: " << CardNumber << std::endl;
    }

    //FUNKCJA ZWRACA NUMER KARTY PASAZERA 
    std::string GetNumber()
    {
        return CardNumber;
    }
};

#endif