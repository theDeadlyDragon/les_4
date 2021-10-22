//
// Created by maurice Bal on 15/10/2021.
//

#include "Vec3D.h"
#include <math.h>

Vec3D Vec3D::operator+(Vec3D const &other){
    return Vec3D(x + other.x, y + other.y , z + other.z);
}
Vec3D Vec3D::operator-(const Vec3D &other) {
    return Vec3D(x - other.x, y - other.y , z - other.z);
}
void  Vec3D::mul    (float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
}
void  Vec3D::div    (float scalar) {
    x /= scalar;
    y /= scalar;
    z /= scalar;
}
float Vec3D::norm   () const {
    float temp  = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    return temp;
}
float Vec3D::dot    (const Vec3D &other) const {
    float temp = x*other.x + y*other.y + z*other.z;

    return temp;
}
void  Vec3D::show   (std::string label) {
    std::cout << label << " has an x,y,z value of :" << x << "," << y << "," << z <<std::endl;
}
Vec3D  Vec3D::cross  (Vec3D const &other) {
    Vec3D tempVec = Vec3D(0,0,0);
    tempVec.x = y*other.z - z * other.y;
    tempVec.y = z*other.x - x * other.z;
    tempVec.z = x*other.y - y * other.x;
    return tempVec;
}
Vec3D Vec3D::unit   () {
    auto tempVect = Vec3D(x,y,z);
    float temp = norm();
    tempVect.div(temp);
    return tempVect;
}