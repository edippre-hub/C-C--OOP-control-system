cmake_minimum_required(VERSION 3.10)
project(C_Cpp_OOP_Control_System)

set(CMAKE_CXX_STANDARD 17)

include_directories(include src src/hardware src/interfaces src/core src/c_module)

add_executable(gse_controller
    src/main.cpp
    src/core/Controller.cpp
    src/hardware/Valve.cpp
    src/hardware/Pump.cpp
    src/hardware/Sensor.cpp
    src/hardware/Actuator.cpp
    src/c_module/legacy_interface.c
)
