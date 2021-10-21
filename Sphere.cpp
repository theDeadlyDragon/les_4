//
// Created by maurice Bal on 15/10/2021.
//

#include "Sphere.h"



bool Sphere::hit(Ray &ray) {
    Vec3D tempVect = center;
    tempVect = tempVect-ray.getVectorS();

    tempVect = tempVect.cross(ray.getVectorD());
    float output = tempVect.norm()/(ray.getVectorD().norm());

    if(output <= radius ){
        auto oC = Vec3D((center.x - ray.getXSup()),(center.y - ray.getYSup()),(center.z - ray.getZSup()));


        auto a = ((ray.getXDir()*ray.getXDir())+(ray.getYDir()*ray.getYDir())+(ray.getZDir()*ray.getZDir()));


        auto b = -2*oC.dot(ray.getVectorD());

        auto c = oC.dot(oC) - radius* radius;
        //auto h = (center.x - ray.xSup) * (center.x - ray.xSup) + (center.y-ray.ySup) * (center.y - ray.ySup) +(center.z-ray.zSup) * (center.z - ray.zSup) - (radius*radius) ;

        float d = b*b-4*a*c;


        if(d<0){
            return false;
        }
        return true;
    }

}