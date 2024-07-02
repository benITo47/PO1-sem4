#include "GameObject.h"

std::vector<GameObject*> GameObject::objects;


GameObject::GameObject(std::string Name):name(Name){}


GameObject* GameObject::addGameObject(GameObject* entity)
{
    objects.push_back(entity);
    return entity; 
}

std::vector<GameObject*> GameObject::ActiveGameObjects()
{
    return objects;
}
void GameObject::destroyGameObject(GameObject* entity)
{
    for(int i = 0; i < objects.size(); i++)
    {
        if(objects[i] == entity)
        {
            delete objects[i];
            objects.erase(objects.begin() + i);
        }
    }
}
void GameObject::destroyGameObjects()
{
    for(int i = 0; i < objects.size(); i++)
    {
        delete objects[i];
    }
}
void GameObject::action()
{
    std::cout << "I'm doing nothing" << std::endl; 
}
std::string GameObject::Name()
{
    return name; 
}; 