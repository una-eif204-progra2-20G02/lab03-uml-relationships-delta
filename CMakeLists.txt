cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(CMAKE_CXX_STANDARD 17)
add_executable(sample Vehiculo.h main.cpp Motor.cpp Motor.h Conductor.cpp Conductor.h Bus.cpp Bus.h Carro.cpp Carro.h)