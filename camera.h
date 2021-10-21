//
// Created by mauri on 10/21/2021.
//
#pragma once
#include "Vec3D.h"
#ifndef LES_4_CAMERA_H
#define LES_4_CAMERA_H


class Camera {
protected:
    Vec3D camCor = Vec3D(0,0,0);;
    Vec3D camViewDir = Vec3D(0,0,0);;


    Camera(float centerX, float centerY, float centerZ, Vec3D viewDir){
      camCor = Vec3D(centerX,centerY,centerZ);
      camViewDir = viewDir;
    };
public:
    Vec3D& getCamCor(){
        return camCor;
    }
    Vec3D& getCamViewDir(){
        return camViewDir;
    }

};


#endif //LES_4_CAMERA_H
