//
// Created by mauri on 10/21/2021.
//

#include "camera.h"


int& Camera::getCamWidth(){
    int temp = camVector[0].size();
    return temp;
}
int& Camera::getCamHeight(){
    int temp = camVector.size();
    return temp;
}
Vec3D Camera::getSupportV() {
    Vec3D tempCamSi(0,0,-3);

    return (tempCamSi+camCor);
}

Camera::Camera(float centerX, float centerY, float centerZ, Vec3D viewDir) {
    camVector.resize(80,std::vector<int>(40, 0));
    camCor = Vec3D(centerX,centerY,centerZ);
    camViewDir = viewDir;
}


