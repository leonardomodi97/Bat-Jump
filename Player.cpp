//
// Created by leonardo on 08/06/17.
//

#include "Player.h"
#include "Bullet.h"

Player::Player(int hp, PowerUp* inventory, bool armor) : hp(hp), puInventory(inventory), armor(armor) {}

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
