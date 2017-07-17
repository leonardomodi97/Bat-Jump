//
// Created by leonardo on 08/06/17.
//

#include "PowerUp.h"
#include <string>

PowerUp::PowerUp(std::string typeP) : typeP(typeP) {
    type=4;
}

void PowerUp::onCollision(GameObject &gameObject) {}

void PowerUp::move() {}
