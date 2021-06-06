// Example2.cpp
// Special matrices and arrays

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <Eigen/Dense>

int main()
{
    std::cout << "A fixed-size array:\n";
    Eigen::Array33f a1 = Eigen::Array33f::Zero();
    std::cout << a1 << "\n\n";


    std::cout << "A one-dimensional dynamic-size array:\n";
    Eigen::ArrayXf a2 = Eigen::ArrayXf::Zero(3);
    std::cout << a2 << "\n\n";


    std::cout << "A two-dimensional dynamic-size array:\n";
    Eigen::ArrayXXf a3 = Eigen::ArrayXXf::Zero(3, 4);
    std::cout << a3 << "\n\n";

    Eigen::ArrayXXf table(10, 4);
    table.col(0) = Eigen::ArrayXf::LinSpaced(10, 0, 90);
    table.col(1) = M_PI / 180 * table.col(0);
    table.col(2) = table.col(1).sin();
    table.col(3) = table.col(1).cos();
    std::cout << "     Degrees      Radians         Sine       Cosine\n";
    std::cout << table << std::endl << std::endl;

    const int size = 6;
    Eigen::MatrixXd mat1(size, size);
    mat1.topLeftCorner(size / 2, size / 2) =
        Eigen::MatrixXd::Zero(size / 2, size / 2);
    mat1.topRightCorner(size / 2, size / 2) =
        Eigen::MatrixXd::Identity(size / 2, size / 2);
    mat1.bottomLeftCorner(size / 2, size / 2) =
        Eigen::MatrixXd::Identity(size / 2, size / 2);
    mat1.bottomRightCorner(size / 2, size / 2) =
        Eigen::MatrixXd::Zero(size / 2, size / 2);
    std::cout << mat1 << std::endl << std::endl;

    Eigen::MatrixXd mat2(size, size);
    mat2.topLeftCorner(size / 2, size / 2).setZero();
    mat2.topRightCorner(size / 2, size / 2).setIdentity();
    mat2.bottomLeftCorner(size / 2, size / 2).setIdentity();
    mat2.bottomRightCorner(size / 2, size / 2).setZero();
    std::cout << mat2 << std::endl << std::endl;

    Eigen::MatrixXd mat3(size, size);
    mat3 << Eigen::MatrixXd::Zero(size / 2, size / 2),
                       Eigen::MatrixXd::Identity(size / 2, size / 2),
            Eigen::MatrixXd::Identity(size / 2, size / 2),
                       Eigen::MatrixXd::Zero(size / 2, size / 2);
    std::cout << mat3 << std::endl;
}
