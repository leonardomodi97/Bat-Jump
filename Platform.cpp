//
// Created by leonardo on 14/06/17.
//

#include "Platform.h"
#include "Player.h"


Platform::Platform(int boost, bool broken) : boost(boost), broken(broken) {
    type=3;
}

bool Platform::isBroken() const {
    return broken;
}

void Platform::setBroken(bool broken) {
    Platform::broken = broken;
}

int Platform::getBoost() const {
    return boost;
}

void Platform::setBoost(int boost) {
    Platform::boost = boost;
}

void Platform::onCollision(GameObject &gameObject) {
    Player& player = dynamic_cast<Player&>(gameObject);
    if((posX >= gameObject.posX && posX+dimY < gameObject.posX) && (posY >= gameObject.posY && posY-gameObject.dimY < gameObject.posY)) {
        player.move(posY);
    }
}

void Platform::move() {}
