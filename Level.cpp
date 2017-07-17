//
// Created by dani on 06/06/17.
//

#include <iostream>
#include <SFML/Window/Keyboard.hpp>
#include "Level.h"
#include "Player.h"

Level::Level(std::fstream &fileMap) {

    fileMap.open("../Maps/fileMap.txt");
    if(fileMap.is_open()) {
        int i=0;
        while (getline(fileMap,data[i]) && i<20){
            i++;
        }
        fileMap.close();
    } else std::cout << "Unable to open file" << std::endl;

    dx=0;
    dy=0;

}

double Level::calculateDensity() {
    return (1/(height+points));
}

void Level::setDifficulty(int diff) {
    difficulty = diff;
    provafind = data[2].find("=");

}

long Level::getProvafind() const {
    return provafind;
}

const std::string Level::getData(int number) const {
    return data[number];
}

void Level::updateLevel(GameObject &player) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        if(player.getPosX()<0){
            dx=0;
            player.setPosX(550);
        } else{
            dx+=0.15;
        }
        player.setPosX(player.getPosX()-dx);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if(player.getPosX()>550){
            dx=0;
            player.setPosX(0);
        } else{
            dx+=0.15;
        }
        player.setPosX(player.getPosX()+dx);
    }

    //funzione per il salto

    dy += 0.2;
    player.setPosY(player.getPosY()+dy);

    if(player.getPosY()>700){
        dy = -10;
    }

}

