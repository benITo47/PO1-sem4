#include<iostream> 

#include <FSElement.h>
#include<Dir.h> 
#include<File.h> 
#include <vector>
//#include <future> 



std::vector<FSElement*> showRealtivePathsHelper(Dir* searchStartDir, FSElement* toBeFound)
{
    std::vector<FSElement*> resultPath; 
    
    resultPath.push_back(searchStartDir);

    for(auto elem: searchStartDir->getContents())
    {
        if(elem->getName() == toBeFound->getName())
        {
            resultPath.push_back(elem);
            return resultPath;
        }
        else if(elem->getType() == "DIR")
        {

            auto subDirSearchResult = showRealtivePathsHelper(static_cast<Dir*>(elem), toBeFound);
            if(subDirSearchResult.empty())
            {
                resultPath.pop_back();
                continue; 
            }
            bool contains = false;  
            for(auto elem: subDirSearchResult)
            {
                if(elem == toBeFound)
                {
                    contains = true;
                    break;
                }
            }
            
            if(contains)
            {
            resultPath.insert(resultPath.end(), subDirSearchResult.begin(), subDirSearchResult.end());
            }
        }
         
    }

    return resultPath;

}  



void ShowRelativePaths(Dir* searchStartDir, FSElement* toBeFound)
{
   std::vector<FSElement*> foundPath = showRealtivePathsHelper(searchStartDir,toBeFound);

    size_t sz= foundPath.size();
    for(int i = 0; i < sz ; i++)
    {
        std::cout << foundPath[i]->getName();
        if(i != sz-1)
        {
            std::cout << "/";
        }
    }
    std::cout << std::endl;
}