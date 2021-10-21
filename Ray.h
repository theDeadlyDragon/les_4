//
// Created by maurice Bal on 15/10/2021.
//
#pragma once
#include "Object.h"
#include "Vec3D.h"

#ifndef LES_4_RAY_H
#define LES_4_RAY_H
typedef std::vector<Object*> VPO;

class Ray {

    friend class Vec3D;


private:

protected:



    Vec3D vectorS = Vec3D(0,0,0);
    Vec3D vectorD = Vec3D(0,0,0);
    VPO;

    float xSup,ySup,zSup,xDir,yDir,zDir;
    float xStart,yStartp,zStart;


public:

    Vec3D getVectorD()const{
        return vectorD;
    }
    Vec3D getVectorS()const{
        return vectorS;
    }
    float getXSup()const{
        return xSup;
    }
    float getYSup()const{
        return ySup;
    }
    float getZSup()const{
        return zSup;
    }
    float getXDir()const{
        return xDir;
    }
    float getYDir()const{
        return yDir;
    }
    float getZDir()const{
        return zDir;
    }

    Ray(float xStart, float yStart, float zDir):
            xSup(xSup),ySup(ySup),zSup(zSup), xDir(xDir),yDir(yDir),zDir(zDir) {
        vectorS = Vec3D(xSup,ySup,zSup);
        vectorD = Vec3D(xDir,yDir,zDir);
    }
};


#endif //LES_4_RAY_H
