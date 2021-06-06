// Example1.cpp
// The comma initializer

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::Matrix3f m;
    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    std::cout << m << std::endl << std::endl;

    Eigen::RowVectorXd vec1(3);
    vec1 << 1, 2, 3;
    std::cout << "vec1 = " << vec1 << std::endl;
    Eigen::RowVectorXd vec2(4);
    vec2 << 1, 4, 9, 16;
    std::cout << "vec2 = " << vec2 << std::endl;
    Eigen::RowVectorXd joined(7);
    joined << vec1, vec2;
    std::cout << "joined = " << joined << std::endl << std::endl;

    Eigen::MatrixXf matA(2, 2);
    matA << 1, 2, 3, 4;
    Eigen::MatrixXf matB(4, 4);
    matB << matA, matA / 10, matA / 10, matA;
    std::cout << matB << std::endl << std::endl;

    Eigen::Matrix3f n;
    n.row(0) << 1, 2, 3;
    n.block(1, 0, 2, 2) << 4, 5, 7, 8;
    n.col(2).tail(2) << 6, 9;
    std::cout << n;
}
