//
// Created by dani on 06/06/17.
//

#include "GameObject.h"


GameObject::GameObject(int x=0, int y=0, sf::Sprite *goSprite= nullptr, sf::Texture *goTexture= nullptr): posX(x), posY(y), texture(goTexture),
                                                                                  sprite(goSprite){}

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

sf::Sprite *GameObject::getSprite() const {
    return sprite;
}

void GameObject::setSprite(sf::Sprite *sprite) {
    GameObject::sprite = sprite;
}

sf::Texture *GameObject::getTexture() const {
    return texture;
}

void GameObject::setTexture(sf::Texture *texture) {
    GameObject::texture = texture;
}







