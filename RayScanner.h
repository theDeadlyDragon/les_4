//
// Created by maurice Bal on 15/10/2021.
//
#pragma once
#include "Object.h"
#include "camera.h"
#include "Vec3D.h"

#ifndef LES_4_RAYSCANNER_H
#define LES_4_RAYSCANNER_H


class RayScanner{

protected:
    Camera cam = Camera(0,0,0,Vec3D(0,0,0));

public:
    RayScanner();

    void scan();
};


#endif //LES_4_RAYSCANNER_H
