//
// Created by leonardo on 14/06/17.
//

#include "Platform.h"


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

void Platform::onCollision(GameObject &gameObject) {}

void Platform::move() {}
