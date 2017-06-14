//
// Created by dani on 06/06/17.
//

#include <iostream>
#include "Level.h"

Level::Level(std::fstream &fileMap) {

    fileMap.open("../Maps/fileMap.txt");
    if(fileMap.is_open()) {
        while (getline(fileMap,data)){
            std::cout << data << '\n' ;
        }
        fileMap.close();
    } else std::cout << "Unable to open file" << std::endl;

}

double Level::calculateDensity() {
    return (1/(height+points));
}

void Level::setDifficulty(int diff) {
    difficulty = diff;
    charn = data.find("difficulty");

}

const std::string &Level::getData() const {
    return data;
}

