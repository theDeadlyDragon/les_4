//
// Created by maurice Bal on 15/10/2021.
//
#pragma once
#include "Object.h"
#include "Vec3D.h"

#ifndef LES_4_SPHERE_H
#define LES_4_SPHERE_H


class Sphere: public Object {

protected:
    friend class Ray;
    friend class Vec3D;

    float radius;
    Vec3D center = Vec3D(0,0,0);


public:
    bool hit (Ray &ray) ;

    Sphere(float x, float y, float z, float radius) : Object(x, y, z), radius(radius) {}
};


#endif //LES_4_SPHERE_H1
