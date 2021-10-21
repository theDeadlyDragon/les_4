//
// Created by maurice Bal on 15/10/2021.
//

#include "Floor.h"


void Floor::createFloor() {
    for(int y = 0; y < lenght; y++){
        for(int x = 0; x < lenght; x++){
            floorVector[y][x] = '&';
        }
    }

};

void Floor::printFloor() {
    for(int y = 0; y < lenght; y++){
        for(int x = 0; x < lenght; x++){
            std::cout << floorVector[y][x];
        }
        std::cout << std::endl;
    }


}
bool Floor::hit(Ray &ray) {
    std::cout << "fuck you" << std::endl;
    return false;
}