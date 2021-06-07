// Example1.cpp
// Reductions

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::Matrix2d mat;
    mat << 1, 2,
           3, 4;
    std::cout << "Here is mat.sum():       " << mat.sum() << std::endl;
    std::cout << "Here is mat.prod():      " << mat.prod() << std::endl;
    std::cout << "Here is mat.mean():      " << mat.mean() << std::endl;
    std::cout << "Here is mat.minCoeff():  " << mat.minCoeff() << std::endl;
    std::cout << "Here is mat.maxCoeff():  " << mat.maxCoeff() << std::endl;
    std::cout << "Here is mat.trace():     " << mat.trace() << std::endl;
}
