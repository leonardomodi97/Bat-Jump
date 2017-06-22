//
// Created by dani on 06/06/17.
//

#include <iostream>
#include "Level.h"

Level::Level(std::fstream &fileMap) {

    fileMap.open("../Maps/fileMap.txt");
    if(fileMap.is_open()) {
        int i=0;
        while (getline(fileMap,data[i]) && i<20){
            i++;
        }
        fileMap.close();
    } else std::cout << "Unable to open file" << std::endl;

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

