//!ASTE 499 Applied Scientific Computing
/*!Homework 10: Unit Test and Code Documentation
   This function defines two vectors from a predefined header file Vec3.h and performs arithematic operations on them
*/ 


#include <iostream>
#include "Vec.h"



int main(int num_args, char** args) {
    double3 a{ 0,1,2 };
    double3 b{ 0,0,1 };
    std::cout << a - b << std::endl;
    std::cout << dot(a, b) << std::endl;
    return 0;
}