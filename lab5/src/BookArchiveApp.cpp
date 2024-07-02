#include "BookArchiveApp.h"


    BookArchiveApp::BookArchiveApp() {} 

    void BookArchiveApp::addMaterialToBase(IKsiazka* material)
    {
        Ksiazki.push_back(material);
    }

    void BookArchiveApp::putOnBookshelf(std::string tytul, User& user, std::string Status)
    {
        for(int i = 0; i < Ksiazki.size(); i++)
        {
            if(Ksiazki[i]->getTitle() == tytul)
            {
                user.putOnShelf(Status, Ksiazki[i]);
                return;
            }
        }
        std::cout << "Przepraszamy - w naszej bazie nie ma książki pod tytułem \"" << tytul << "\"\n"; 
    }

    void BookArchiveApp::rateBook(std::string tytul, User& user, float ocena)
    {
        IKsiazka* ocenianaKsiazka = const_cast<IKsiazka*>(user.canRate(tytul));
        if(ocenianaKsiazka != nullptr)
        {
            ocenianaKsiazka->addRating(ocena);
        }
        else
        {
            std::cout << "\nPrzepraszamy - nie można ocenić książki, której się nie przeczytało.\n";
        }
    }

   

    void BookArchiveApp::displayAllBooks()
    {
        for(auto elem: Ksiazki)
        {
            elem->wyswietlInformacje();
        }
    }

    BookArchiveApp::~BookArchiveApp()
    {
        for(auto elem: Ksiazki)
        {
            delete elem;
        }
    }