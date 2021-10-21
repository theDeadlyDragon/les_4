//
// Created by maurice Bal on 15/10/2021.
//
#pragma once

#include "Vec3D.h"

#ifndef LES_4_OBJECT_H
#define LES_4_OBJECT_H


class Object {
private:
    float x,y,z;
    Vec3D center;

    Object(float x, float y, float z):center(x,y,z){

    }
};


#endif //LES_4_OBJECT_H
