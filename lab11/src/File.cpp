#include "File.h"

  File::File(std::string name) : FSElement(name, "FILE") {}

   std::vector<FSElement*> File::getFSElements(int depth, int currentDepth = 0 ) 
    {
        return {this};
    }