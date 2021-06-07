// Example5.cpp
// Partial reductions

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf mat(2, 4);
    mat << 1, 2, 6, 9,
           3, 1, 7, 2;

    std::cout << "Column's maximum: " << std::endl
        << mat.colwise().maxCoeff() << std::endl;
    std::cout << "Row's maximum: " << std::endl
        << mat.rowwise().maxCoeff() << std::endl;
}
