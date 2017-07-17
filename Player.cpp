//
// Created by leonardo on 08/06/17.
//

#include <SFML/Window/Keyboard.hpp>
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Platform.h"

Player::Player(int hp, PowerUp* inventory, bool armor) : hp(hp), puInventory(inventory), armor(armor) {
    type=1;
}

void Player::shoot(bool magicBullet) {
    Bullet playerB(true,Player::posX,Player::posY,magicBullet);
    playerB.move();
}

int Player::getHp() const {
    return hp;
}

void Player::setHp(int hp) {
    Player::hp = hp;
}

bool Player::isArmor() const {
    return armor;
}

void Player::setArmor(bool armor) {
    Player::armor = armor;
}

void Player::onCollision(GameObject &gameObject) {
    if((posX >= gameObject.posX && posX < (gameObject.posX+gameObject.dimX)) && (posY >= gameObject.posY && posY < (gameObject.posY+gameObject.dimY))){

        switch (type){
            case 2:
                Enemy& enemy = dynamic_cast<Enemy&>(gameObject);
                break;
            case 4:
                PowerUp* pu = dynamic_cast<PowerUp*>(&gameObject);
                puInventory=pu;
                break;
        }

    }
}

void Player::move(int y, int x) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        if(posX<x){
            dx=0;
            posX=550;
        } else{
            dx+=0.15;
        }
        posX -= dx;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if(posX>550){
            dx=0;
            posX=0;
        } else{
            dx+=0.15;
        }
        posX += dx;
    }

    //funzione per il salto

    dy += 0.2;
    posY += dy;

    if(posY>700+y){
        dy = -10;
    }
}