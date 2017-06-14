//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_GAMEOBJECT_H
#define BAT_JUMP_PROJECT_GAMEOBJECT_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class GameObject {
public:
    GameObject(double x=0, double y=0);
    virtual void onCollision(GameObject &gameObject)=0;
    virtual void move()=0;

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

    void setSprite(const sf::Sprite &sprite);

    void setTexture(const sf::Texture &texture);

protected:
    double posX,posY;
    sf::Sprite sprite;
    sf::Texture texture;

};


#endif //BAT_JUMP_PROJECT_GAMEOBJECT_H
