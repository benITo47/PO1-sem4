#pragma once 


#include "FSElement.h"

class softLink : public FSElement
{
    public:


    //Konstrukotr
    softLink( FSElement* linkedFSEl, std::string name);

    //Overloaded function
    virtual  std::vector<FSElement*> getFSElements(int depth, int currentDepth  )override;
    private:

    FSElement* linkedFSELEMENT; 



    ~softLink()
    {

    }
};


