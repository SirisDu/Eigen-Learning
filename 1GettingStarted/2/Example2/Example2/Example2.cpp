// Example2.cpp
// Matrices and vectors

#include <iostream>
#include <Eigen/Dense>

int main()
{
    std::cout << "Using MatrixXd, setting size at run time:" << std::endl;
    Eigen::MatrixXd m1 = Eigen::MatrixXd::Random(3, 3);
    m1 = (m1 + Eigen::MatrixXd::Constant(3, 3, 1.2)) * 50;
    std::cout << "m1 =" << std::endl << m1 << std::endl;
    Eigen::VectorXd v1(3);
    v1 << 1, 2, 3;
    std::cout << "m1 * v1 =" << std::endl << m1 * v1 << std::endl;

    std::cout << "Using Matrix3d, setting size at compile time:" << std::endl;
    Eigen::Matrix3d m2 = Eigen::Matrix3d::Random();
    m2 = (m2 + Eigen::Matrix3d::Constant(1.2)) * 50;
    std::cout << "m2 =" << std::endl << m2 << std::endl;
    Eigen::Vector3d v2(3);
    v2 << 1, 2, 3;
    std::cout << "m2 * v2 =" << std::endl << m2 * v2 << std::endl;
}
