//
// Created by leonardo on 08/06/17.
//

#include "PowerUp.h"
#include <string>

PowerUp::PowerUp(std::string type) : type(type) {}

void PowerUp::use(GameObject *gameObject) {
    if(type == "ptBoost"){
        gameObject = new Platform;
    }
    else if(type == "plBoost"){
        player.setArmor(true);
    }
}