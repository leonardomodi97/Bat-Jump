//
// Created by leonardo on 08/06/17.
//

#include "Player.h"

Player::Player(int hp, bool armor, std::vector<std::unique_ptr<PowerUp>> &puInventoryR) : hp(hp), armor(armor), puInventory(puInventoryR) {}