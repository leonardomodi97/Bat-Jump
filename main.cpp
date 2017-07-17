#include <iostream>
#include <SFML/Graphics.hpp>
#include "Level.h"
#include "Player.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800,500), "Bat-Jump");

    std::fstream fileMap;

    Level prova(fileMap);

    GameObject* provaGO;

    provaGO = new Player(1, nullptr);

    prova.updateLevel(*provaGO);

    prova.setDifficulty(10);

    auto posizione = prova.getProvafind();

    auto data = prova.getData(2);

    std::cout << (data)[posizione+2] << std::endl;

    return 0;
}