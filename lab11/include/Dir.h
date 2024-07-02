#pragma once 

#include "FSElement.h"

class Dir : public FSElement
{
public:

    //Konsturkotr
    Dir(std::string name);


    //Przeladowany operator += - dodaje element do _contents
    void operator+=(FSElement *other);

    //Funkcja  dodajace element do _contents 
    void add(FSElement *other);


    //Zwraca wsakznik na Dir o szukanej nazwie (nullptr, jesli nie posiada takiej Dir w _contents, ani dzieci nie posiadaja) 
    Dir* findDir(const std::string &findName);


    //Wypisuje wszystkie Dir ktore znajduja sie w obiekcie oraz w dzieciach do pewnej glebokosci 
    void listDirs(int depth);

    //Przeladowana funkcja wirtualna zwracajaca wszystkie elementy wraz z eleementami dzieci 
    std::vector<FSElement *> getFSElements(int depth, int currentDepth  = 0 ) override;

    //Detruktor
    ~Dir();

    //Zwraca _contents - getter func
    std::vector<FSElement*> getContents();

private:
    std::vector<FSElement *> _contents;

    //Friended operator << 
    friend std::ostream &operator<<(std::ostream &stream, const Dir &directory);
};

