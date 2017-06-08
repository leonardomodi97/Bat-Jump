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

    int getPosX() const {
        return posX;
    }

    void setPosX(int posX) {
        GameObject::posX = posX;
    }

    int getPosY() const {
        return posY;
    }

    void setPosY(int posY) {
        GameObject::posY = posY;
    }

    const sf::Sprite &getSprite() const {
        return sprite;
    }

    void setSprite(const sf::Sprite &sprite) {
        GameObject::sprite = sprite;
    }

    const sf::Texture &getTexture() const {
        return texture;
    }

    void setTexture(const sf::Texture &texture) {
        GameObject::texture = texture;
    }


protected:
    int posX,posY;
    sf::Sprite *sprite;
    sf::Texture *texture;

};


#endif //BAT_JUMP_PROJECT_GAMEOBJECT_H
