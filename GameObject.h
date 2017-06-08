//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_GAMEOBJECT_H
#define BAT_JUMP_PROJECT_GAMEOBJECT_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class GameObject {
public:
    GameObject(int x=0, int y=0, sf::Sprite *goSprite= nullptr, sf::Texture *goTexture= nullptr);
    virtual void onCollision(GameObject &gameObject)=0;
    virtual void move(int x, int y)=0;

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

    sf::Sprite *getSprite() const;

    void setSprite(sf::Sprite *sprite);

    sf::Texture *getTexture() const;

    void setTexture(sf::Texture *texture);

protected:
    int posX,posY;
    sf::Sprite* sprite;
    sf::Texture* texture;

};


#endif //BAT_JUMP_PROJECT_GAMEOBJECT_H
