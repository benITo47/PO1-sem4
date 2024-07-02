#pragma once 

#include "FSElement.h"

class File : public FSElement {

public:

    //konstruktor
    File(std::string name);

    //Overloaded function
    std::vector<FSElement*> getFSElements(int depth, int currentDepth  ) override;
    
private: 
    std::string data; 
};


