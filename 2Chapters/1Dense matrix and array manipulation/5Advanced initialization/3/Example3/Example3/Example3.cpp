// Example3.cpp
// Usage as temporary objects

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf mat = Eigen::MatrixXf::Random(2, 3);
    std::cout << mat << std::endl << std::endl;
    mat = (Eigen::MatrixXf(2, 2) << 0, 1, 1, 0).finished() * mat;
    std::cout << mat << std::endl;
}
