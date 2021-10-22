//
// Created by maurice Bal on 15/10/2021.
//
#pragma once
#include "Object.h"
#include <vector>
#include <iostream>
#include <math.h>
#ifndef LES_4_FLOOR_H
#define LES_4_FLOOR_H


class Floor: public Object{

protected:

    std::vector<std::vector<char>> floorVector;
    int width;
    int lenght;
    int bWidth;
    std::vector<int> origin;

public:
    Floor(float x, float y, float z, int width = 51, int lenght = 51, int bWidth = 3) :
    Object(x, y, z), width(width), lenght(lenght), bWidth(bWidth) {
        origin = {(width/2),(lenght/2)};
        floorVector.resize(lenght,std::vector<char>(width, ' '));

        createFloor();

    }

    void createFloor();
    void printFloor();
    bool hit (Ray &ray);
};


#endif //LES_4_FLOOR_H
