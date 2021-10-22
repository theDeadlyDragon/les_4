//
// Created by maurice Bal on 15/10/2021.
//

#include "Floor.h"



void Floor::createFloor() {

    std::cout << origin[1] <<" :" << origin[0] << std::endl;

    bool cLenght = false;
    bool cWidth = false;


    for(int y = 0; y < lenght; y++){
        if((y%bWidth) ==0)
            cLenght = !cLenght;
        if(cLenght)
            cWidth = false;
        else
            cWidth = true;

        for(int x = 0; x < width; x++){

            if((x%bWidth) == 0){
                cWidth = !cWidth;
            }



            if(cWidth){
                floorVector[y][x] = ' ';


            }
            else
                floorVector[y][x] = '#';
            if(origin[0] == x && origin[1] == y){
                floorVector[y][x] = '*';}

        }
    }

};

void Floor::printFloor() {
    for(int y = 0; y < lenght; y++){
        for(int x = 0; x < lenght; x++){
           std::cout << floorVector[y][x];
        }
        std::cout << std::endl;
    }


}
bool Floor::hit(Ray &ray) {
    Vec3D tempVec1 = ray.getVectorS();
    Vec3D tempVec2 = ray.getVectorD();

    float a = -(tempVec1.y / tempVec2.y);
    if(a > 0)
        return false;
    tempVec2.mul(a);
    tempVec1 = tempVec1 + tempVec2;
    int x = std::round(tempVec1.x);
    int z = std::round(tempVec1.z);



    if(floorVector[(origin[1]+z)][(origin[1]-x)] == '#')
        return true;


    std::cout << x <<" :" << z << std::endl;
    floorVector[(origin[1]-z)][(origin[1]+x)] = '2';

    return false;
}

