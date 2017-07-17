//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_GAMEOBJECT_H
#define BAT_JUMP_PROJECT_GAMEOBJECT_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class GameObject {
public:
    GameObject(double x=0, double y=0, double dimX=0, double dimY=0);
    virtual void onCollision(GameObject &gameObject)=0;
    virtual void move()=0;

    int getPosX() const;

    void setPosX(double posX);

    int getPosY() const;

    void setPosY(double posY);

    void setSprite(const sf::Sprite &sprite);

    void setTexture(const sf::Texture &texture);

    const sf::Sprite &getSprite() const;

    const sf::Texture &getTexture() const;

protected:
    double posX,posY;
    sf::Sprite sprite;
    sf::Texture texture;
    double dimX, dimY;
    int type;

};


#endif //BAT_JUMP_PROJECT_GAMEOBJECT_H
