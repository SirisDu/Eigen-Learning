// Example6.cpp
// Combining partial reductions with other operations

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf mat(2, 4);
    mat << 1, 2, 6, 9,
           3, 1, 7, 2;

    Eigen::MatrixXf::Index maxIndex;
    float maxNorm = mat.colwise().sum().maxCoeff(&maxIndex);

    std::cout << "Maximum sum at position " << maxIndex << std::endl;

    std::cout << "The corresponding vector is: " << std::endl;
    std::cout << mat.col(maxIndex) << std::endl;
    std::cout << "And its sum is is: " << maxNorm << std::endl;
}
