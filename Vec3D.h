//
// Created by maurice Bal on 15/10/2021.
//
#include <iostream>


#ifndef LES_4_VEC3D_H
#define LES_4_VEC3D_H


class Vec3D {
    friend class Ray;


public:
    float x,y,z;
    //init
    Vec3D(float x,float y ,float z):
            x(x),y(y),z(z){}

    Vec3D operator+(Vec3D const &other);
    void show   (std::string label);
    void mul    (float scalar);
    Vec3D operator-(Vec3D const &other);
    void div    (float scalar);
    Vec3D cross  (Vec3D const &other);
    float dot   (Vec3D const  &other) const;
    float norm  () const;
    Vec3D unit  ();


};


#endif //LES_4_VEC3D_H
