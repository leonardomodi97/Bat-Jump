//
// Created by dani on 06/06/17.
//

#ifndef BAT_JUMP_PROJECT_LEVEL_H
#define BAT_JUMP_PROJECT_LEVEL_H


#include <SFML/Graphics/Texture.hpp>
#include <bits/unique_ptr.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include "GameObject.h"

class Level {
public:
    Level(const sf::Sprite background, int difficulty, double points, int height,
          std::vector<std::unique_ptr<GameObject>>  gameObjectPtr);

    double calculateDensity();
    void updateLevel();
    void removeGameObject(GameObject &gameObject);
    void addGameObject(GameObject &gameObject);
    void drawLevel(sf::RenderWindow &window);


private:
    sf::Sprite background;
    int difficulty;
    double points;
    int height;
    std::vector<std::unique_ptr<GameObject>> gameObjectPtr;

};


#endif //BAT_JUMP_PROJECT_LEVEL_H
