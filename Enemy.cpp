//
// Created by leonardo on 14/06/17.
//

#include "Enemy.h"

Enemy::Enemy(int h, int lvl, int dp, double x, double y) : hp(h), level(lvl), deathPoints(dp), GameObject(x,y) {}

int Enemy::getHp() const {
    return hp;
}

void Enemy::setHp(int hp) {
    Enemy::hp = hp;
}

int Enemy::getLevel() const {
    return level;
}

void Enemy::setLevel(int level) {
    Enemy::level = level;
}

int Enemy::getDeathPoints() const {
    return deathPoints;
}

void Enemy::setDeathPoints(int deathPoints) {
    Enemy::deathPoints = deathPoints;
}

void Enemy::shoot(bool magicBullet) {
    Bullet enemyB(false,Enemy::posX,Enemy::posY,magicBullet);
    enemyB.move();
}