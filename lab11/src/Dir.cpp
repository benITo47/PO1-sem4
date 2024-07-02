#include "Dir.h"


Dir::Dir(std::string name): FSElement(name, "DIR") {} 


 void Dir::operator+=(FSElement* other) {
        add(other);
    }

    void Dir::add(FSElement* other) {
        _contents.push_back(other);
    }


    std::vector<FSElement*> Dir::getContents()
    {
        return _contents; 
    };



    Dir* Dir::findDir(const std::string& findName) {
        for (auto elem : _contents) {
            if (elem->getType() == "DIR") {
                if (elem->getName() == findName) {
                    return static_cast<Dir*>(elem);
                } else {
                    Dir* found = static_cast<Dir*>(elem)->findDir(findName);
                    if (found) {
                        return found;
                    }
                }
            }
        }
        return nullptr;
    }

    void Dir::listDirs(int depth) {

        std::vector<FSElement*> elements = Dir::getFSElements(depth);
        std::vector<FSElement*> dirs; 
        
        std::cout << getName() << "  ";

        for(auto elem: elements)
        {
            if(elem->getType() == "DIR")
            {
                std::cout << elem->getName() << "  ";
            }
        }
        std::cout << "\n";

    }



std::vector<FSElement*> Dir::getFSElements(int depth, int currentDepth )  {

    if(depth == -1)
    {
        depth = 150; 
    }
    if (currentDepth >= depth) {
        return {}; 
    }

    std::vector<FSElement*> result;
    for (auto elem : _contents) {
        result.push_back(elem);
        if (elem->getType() == "DIR") {
            auto dirContents = elem->getFSElements(depth, currentDepth + 1);
            result.insert(result.end(), dirContents.begin(), dirContents.end());
        }
    }
    return result;
}


    Dir::~Dir()
    {
        for(auto elem: _contents)
        {
            delete elem; 
        }
    }






std::ostream& operator<<(std::ostream& stream, const Dir& directory) {
    static int tabCounter = 0;
    std::string indent(tabCounter * 3, ' ');
    stream << indent << directory.getName() << " (DIR)" << std::endl;

    tabCounter++;
    for (auto elem : directory._contents) {
        if (elem->getType() == "DIR") {
            stream << *(static_cast<Dir*>(elem));
        }
        else {
            std::string fileIndent(tabCounter * 3, ' ');
            stream << fileIndent << elem->getName() << " (" << elem->getType() << ") " << "\n";
        }
    }
    tabCounter--;
    return stream;
}
