#include "PlayerCharacter.h"

void PlayerCharacter::render() const
        {
            GameObject::render();
            std::cout << "PlayerCharacter attacking!" << std::endl;
        }


        void PlayerCharacter::draw() const 
        {
            Renderable::draw(); 
            std::cout << "PlayerCharacter attacking!" << std::endl; 
        }




void gutils::handleGameObject( GameObject* object)
    {
        if(object)
        {
         PlayerCharacter* player = dynamic_cast<PlayerCharacter*>(object);            
        if(player)
        {
            player->render();
        }
        }

    }

    void gutils::handleRenderable( Renderable* object)
    {
        if(object)
        {
            PlayerCharacter* player = dynamic_cast<PlayerCharacter*>(object);
            if(player)
            {
                player->draw();
            }

        }
    }
