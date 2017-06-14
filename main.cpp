#include <iostream>
#include <SFML/Graphics.hpp>
#include "Level.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800,500), "Bat-Jump");

    std::fstream fileMap;

    Level prova(fileMap);

    prova.setDifficulty(10);

    std::cout << prova.getData() << std::endl;

    return 0;
}