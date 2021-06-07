// Example7.cpp
// Broadcasting

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf mat(2, 4);
    Eigen::MatrixXf mat1(2, 4);
    Eigen::VectorXf v(2);
    Eigen::VectorXf v1(4);

    mat << 1, 2, 6, 9,
           3, 1, 7, 2;

    v << 0,
         1;

    v1 << 0,
          1,
          2,
          3;

    mat1 = mat;

    //add v to each column of m
    mat.colwise() += v;

    std::cout << "Broadcasting result: " << std::endl;
    std::cout << mat << std::endl;
    std::cout << std::endl;

    //add v to each row of m
    mat1.rowwise() += v1.transpose();

    std::cout << "Broadcasting result: " << std::endl;
    std::cout << mat1 << std::endl;
}
