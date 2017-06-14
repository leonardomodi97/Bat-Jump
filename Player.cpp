//
// Created by leonardo on 08/06/17.
//

#include "Player.h"
#include "Bullet.h"

Player::Player(int hp, std::vector<PowerUp*> &puInventoryR, bool armor) : hp(hp), armor(armor), puInventory(puInventoryR) {}

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

const std::vector<PowerUp *> &Player::getPuInventory() const {
    return puInventory;
}

void Player::setPuInventory(const std::vector<PowerUp *> &puInventory) {
    Player::puInventory = puInventory;
}
