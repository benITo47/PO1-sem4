#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include <iostream> 
#include "GameObject.h"
#include "Renderable.h"


class PlayerCharacter: public GameObject, public Renderable
{
    
    public:

        void render() const override;


        void draw() const override;


};



namespace gutils
{
    void handleGameObject( GameObject* object);

    void handleRenderable( Renderable* object);

}


#endif 