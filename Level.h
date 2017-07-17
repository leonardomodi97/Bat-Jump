//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_LEVEL_H
#define BAT_JUMP_PROJECT_LEVEL_H

#include <SFML/Graphics/Texture.hpp>
#include <fstream>
#include "GameObject.h"
#include "Player.h"

class Level {
public:
    Level(std::fstream &fileMap);

    double calculateDensity();
    void updateLevel(GameObject &player);
    void removeGameObject(GameObject &gameObject);
    GameObject addGameObject(GameObject &gameObject);
    void drawLevel();
    void setDifficulty(int diff);

    long getProvafind() const;

    const std::string getData(int number) const;

private:
    sf::Sprite background;
    int difficulty;
    double points;
    int height;
    std::string data[20];
    long int provafind;
    float dx,dy;

};

#endif //BAT_JUMP_PROJECT_LEVEL_H
