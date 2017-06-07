//
// Created by dani on 06/06/17.
//

#include "Level.h"

Level::Level(const sf::Texture background, int difficulty, double points, int height,
              std::vector<GameObject*> gameObjectPtr) : background(background),
                                                                              difficulty(difficulty), points(points),
                                                                              height(height),
                                                                              gameObjectPtr(gameObjectPtr) {}


