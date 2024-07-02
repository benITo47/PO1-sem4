#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<functional> 
#include<iostream>

class Calculator
{
    private:
    int value;

    public:

    //Konstrukotr bezargumentowy - ustawia warotsc value na 0;
    Calculator();   
    //Konstrukotr - tworzy obiekt ze skladnikiem value rownym przekazanemu intowi 
    Calculator(int val);

    //Operator przypisania - przypisuje przekazany argument do skladowej value;
    Calculator& operator=(int val);

    //Operator postinkrementacji
    Calculator& operator++();
    //Operator postdekrementacji
    Calculator& operator--();
    
    //Operator preinkrementacji
    int operator++(int val);

    //Operator predekementacji
    int operator--(int val);

    //Operator zwraca wartosc skladowej value
    Calculator& operator()();
    //Operator wykonuje przekazane jako argument instrukcje na skladowej value
    int operator()(std::function<int(int)> func);
    //Operator wykonuje przekazane jako argument instrukcje na skladowej value i argumencie val1
    int operator()(std::function<int(int,int)> func, int val1);


    //Operator mnozenia
    int operator*(int multiplier);

    //Przemienny operator mnozenia
    friend int operator*(int multiplier, Calculator& object);

    //Operator wyjscia na strumien
    friend std::ostream& operator<<(std::ostream& os, Calculator object);

};


#endif