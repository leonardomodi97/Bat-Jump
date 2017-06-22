//
// Created by leonardo on 14/06/17.
//

#include "Bullet.h"


Bullet::Bullet(bool isShotbyPl, double x, double y, bool magicB) : GameObject(x,y),isShotbyPl(isShotbyPl), magic(magicB) {}

int Bullet::damage() {
    int damage = 1;
    if(magic)
        damage += 2;
    return damage;
}

void Bullet::move() {
    if(isShotbyPl){
        posY -= 0.5;
    } else{
        posY += 0.5;
    }
}

void Bullet::onCollision(GameObject &gameObject) {}