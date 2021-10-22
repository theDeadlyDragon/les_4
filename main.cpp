#include <iostream>
#include "Floor.h"
#include "Sphere.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto f = Floor(0,0,0);

    auto a = Camera(10,2,-100,Vec3D(0,0,0));

    a.getSupportV().show(" ");
    std::cout << a.getCamHeight();


}
