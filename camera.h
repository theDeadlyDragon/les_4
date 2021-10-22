//
// Created by mauri on 10/21/2021.
//
#pragma once
#include "Vec3D.h"
#include <vector>
#include <iostream>
#ifndef LES_4_CAMERA_H
#define LES_4_CAMERA_H


class Camera {
    //friend RayScanner;

protected:
    Vec3D camCor = Vec3D(0,0,0);
    Vec3D camViewDir = Vec3D(0,0,0);
    float si;
    std::vector<std::vector<int>> camVector;;


public:
    Vec3D& getCamCor(){
        return camCor;
    }
    Vec3D& getCamViewDir(){
        return camViewDir;
    }
    int& getCamWidth();
    int& getCamHeight();
    Vec3D getSupportV();


    Camera(float centerX, float centerY, float centerZ, Vec3D viewDir);
};


#endif //LES_4_CAMERA_H
