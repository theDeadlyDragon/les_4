cmake_minimum_required(VERSION 3.20)
project(les_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(les_4 main.cpp Vec3D.cpp Vec3D.h Object.cpp Object.h Sphere.cpp Sphere.h Floor.cpp Floor.h RayScanner.cpp RayScanner.h Ray.cpp Ray.h camera.cpp camera.h)
