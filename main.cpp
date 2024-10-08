#include <iostream>
#include <pybind11/pybind11.h>

extern "C"{
void Display(char* name, int age) {
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}

}




