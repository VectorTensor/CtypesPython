cmake_minimum_required(VERSION 3.29)
project(PythonCtype)

set(CMAKE_CXX_STANDARD 20)
find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 REQUIRED)

add_library(PythonCtype SHARED main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC pybind11::module Python::Python)
