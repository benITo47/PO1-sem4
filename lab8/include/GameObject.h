#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include<vector> 
#include<iostream> 
class GameObject 
{
    public:
    //Constructor
    GameObject(std::string Name);

    //Adds GameObject to objects vector - returns the pointer to added GameObject
    static GameObject* addGameObject(GameObject* entity);
    //Return vector of all alive GameObjects
    static std::vector<GameObject*> ActiveGameObjects();
    //Destroys specified GameObject
    static void destroyGameObject(GameObject* entity);
    //Destroys all GameObjects stored in vector objects
    static void destroyGameObjects();
    //Perform action of GameObject - to be overriden for usefulness;
    virtual void action();
    //Return a strig with a Name of the GameObject
    std::string Name();
    virtual ~GameObject() = default; 

    //Name of the game object
    std::string name; 


    private:
    //GameObject's vector
    static std::vector<GameObject*> objects;


};









#endif
