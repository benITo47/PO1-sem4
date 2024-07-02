#include "softLink.h"

 softLink::softLink( FSElement* linkedFSEl, std::string name): FSElement(name, "LINK"), linkedFSELEMENT(linkedFSEl){} 
     
std::vector<FSElement*> softLink::getFSElements(int depth, int currentDepth = 0 )
{
   return {this};
} 