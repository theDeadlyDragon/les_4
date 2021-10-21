//
// Created by maurice Bal on 15/10/2021.
//
#pragma once
#include "Object.h"
#include <vector>
#include <iostream>
#ifndef LES_4_FLOOR_H
#define LES_4_FLOOR_H


class Floor: public Object{

protected:
    std::vector<std::vector<char>> floorVector;
    float width;
    float lenght;

public:
    Floor(float x, float y, float z, float width = 100, float lenght = 100, float bWidth = 10) :
    Object(x, y, z), width(width), lenght(lenght) {
        createFloor();
    }

    void createFloor();
    void printFloor();
    bool hit (Ray &ray);
};


#endif //LES_4_FLOOR_H
