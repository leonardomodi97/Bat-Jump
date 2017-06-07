//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_LEVEL_H
#define BAT_JUMP_PROJECT_LEVEL_H


#include <SFML/Graphics/Texture.hpp>
#include <bits/unique_ptr.h>
#include "GameObject.h"

class Level {
public:
    Level(const sf::Texture background, int difficulty, double points, int height,
           std::vector<GameObject*> gameObjectPtr);
    float calculateDensity();
    void updateLevel();
    void removeGameObject(GameObject &gameObject);
    void addGameObject(GameObject &gameObject);
    void drawLevel();


private:
    sf::Texture background;
    int difficulty;
    double points;
    int height;
    std::vector<GameObject*> gameObjectPtr;

};


#endif //BAT_JUMP_PROJECT_LEVEL_H