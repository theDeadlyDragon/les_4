//
// Created by maurice Bal on 15/10/2021.
//
#pragma once

#include "Vec3D.h"
#include <vector>
#include "camera.h"
#include "Object.h"
#ifndef LES_4_RAY_H
#define LES_4_RAY_H
class Object;

class Ray {
    typedef std::vector<Object*> VPO;

    friend class Vec3D;


private:

protected:



    Vec3D vectorS = Vec3D(0,0,0);
    Vec3D vectorD = Vec3D(0,0,0);
    VPO object;

    float xSup,ySup,zSup,xDir,yDir,zDir;
    float xStart,yStart,zStart;


    Ray(float xStart, float yStart, VPO object):
        xStart(xStart), yStart(yStart), object(object){

    };


public:

    Vec3D& getVectorD(){
        return vectorD;
    }
    Vec3D& getVectorS(){
        return vectorS;
    }
    float& getXSup(){
        return xSup;
    }
    float& getYSup(){
        return ySup;
    }
    float& getZSup(){
        return zSup;
    }
    float& getXDir(){
        return xDir;
    }
    float& getYDir(){
        return yDir;
    }
    float& getZDir(){
        return zDir;
    }
    bool scan();

    Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir):
            xSup(xSup),ySup(ySup),zSup(zSup), xDir(xDir),yDir(yDir),zDir(zDir) {
        vectorS = Vec3D(xSup,ySup,zSup);
        vectorD = Vec3D(xDir,yDir,zDir);
    }
};


#endif //LES_4_RAY_H
