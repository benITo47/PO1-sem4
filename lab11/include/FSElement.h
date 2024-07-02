#pragma once 

#include <iostream>
#include <vector>
#include <string>


class FSElement {
public:

//Konstrukotr
    FSElement(std::string name, std::string type) : _name(name), _type(type) {}
    
    //Wirutalny destruktor
    virtual ~FSElement() {}

    //Getter functions
    std::string getName() const { return _name; }
    std::string getType() const { return _type; }

    //Purely virtual getFSElements
    virtual  std::vector<FSElement*> getFSElements(int depth, int currentDepth = 0 ) = 0; 



private:
    std::string _name;
    std::string _type;
    

};


