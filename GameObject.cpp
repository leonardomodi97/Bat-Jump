//
// Created by dani on 06/06/17.
//

#include "GameObject.h"


GameObject::GameObject(double x, double y): posX(x), posY(y){}

int GameObject::getPosX() const {
    return posX;
}

void GameObject::setPosX(int posX) {
    GameObject::posX = posX;
}

int GameObject::getPosY() const {
    return posY;
}

void GameObject::setPosY(int posY) {
    GameObject::posY = posY;
}

void GameObject::setSprite(const sf::Sprite &sprite) {
    GameObject::sprite = sprite;
}

void GameObject::setTexture(const sf::Texture &texture) {
    GameObject::texture = texture;
}







