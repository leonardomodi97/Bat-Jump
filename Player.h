//
// Created by leonardo on 08/06/17.
//

#ifndef BAT_JUMP_PROJECT_PLAYER_H
#define BAT_JUMP_PROJECT_PLAYER_H


#include <bits/unique_ptr.h>
#include "GameObject.h"
#include "PowerUp.h"

#

class Player : public GameObject{
public:
    Player(int hp, std::vector<PowerUp*> &puInventoryR, bool armor=false);

private:
    int hp;
    bool armor;
    std::vector<PowerUp*> puInventory;

};


#endif //BAT_JUMP_PROJECT_PLAYER_H
