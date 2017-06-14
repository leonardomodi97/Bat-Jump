//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_LEVEL_H
#define BAT_JUMP_PROJECT_LEVEL_H


#include <SFML/Graphics/Texture.hpp>
#include <fstream>
#include "GameObject.h"

class Level {
public:
    Level(std::fstream &fileMap);

    double calculateDensity();
    void updateLevel();
    void removeGameObject(GameObject &gameObject);
    void addGameObject(GameObject &gameObject);
    void drawLevel();
    void setDifficulty(int diff);

    const std::string &getData() const;


private:
    sf::Sprite background;
    int difficulty;
    double points;
    int height;
    std::string data;
    long int charn;
};


#endif //BAT_JUMP_PROJECT_LEVEL_H
