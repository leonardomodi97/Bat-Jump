//
// Created by leonardo on 08/06/17.
//

#include "Player.h"

Player::Player(int hp, std::vector<std::unique_ptr<PowerUp>> &puInventoryR, bool armor) : hp(hp), armor(armor), puInventory(puInventoryR) {}