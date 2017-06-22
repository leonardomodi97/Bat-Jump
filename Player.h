//
// Created by leonardo on 08/06/17.
//

#ifndef BAT_JUMP_PROJECT_PLAYER_H
#define BAT_JUMP_PROJECT_PLAYER_H


#include <bits/unique_ptr.h>
#include "GameObject.h"
#include "PowerUp.h"


class Player : public GameObject{
public:
    Player(int hp, PowerUp* Inventory, bool armor=false);
    void shoot(bool magicBullet);

    int getHp() const;

    void setHp(int hp);

    bool isArmor() const;

    void setArmor(bool armor);

private:
    int hp;
    bool armor;
    PowerUp* puInventory;

};


#endif //BAT_JUMP_PROJECT_PLAYER_H
