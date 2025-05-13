cmake_minimum_required(VERSION 3.10)
project(SmartGridSim)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(SmartGridSim
    src/main.cpp
    src/Grid.cpp
    src/GridNode.cpp
    src/AnomalyDetector.cpp
    src/LoadBalancer.cpp
)
