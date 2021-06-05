// Example6.cpp
// Basic arithmetic reduction operations

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::Matrix2d mat;
    mat << 1, 2,
           3, 7;
    std::cout << "Here is mat.sum():       " << mat.sum() << std::endl;
    std::cout << "Here is mat.prod():      " << mat.prod() << std::endl;
    std::cout << "Here is mat.mean():      " << mat.mean() << std::endl;
    std::cout << "Here is mat.minCoeff():  " << mat.minCoeff() << std::endl;
    std::cout << "Here is mat.maxCoeff():  " << mat.maxCoeff() << std::endl;
    std::cout << "Here is mat.trace():     " << mat.trace() << std::endl;

    Eigen::Matrix3f m = Eigen::Matrix3f::Random();
    std::ptrdiff_t i, j;
    float minOfM = m.minCoeff(&i, &j);
    std::cout << "Here is the matrix m:\n" << m << std::endl;
    std::cout << "Its minimum coefficient (" << minOfM
        << ") is at position (" << i << "," << j << ")\n\n";

    Eigen::RowVector4i v = Eigen::RowVector4i::Random();
    int maxOfV = v.maxCoeff(&i);
    std::cout << "Here is the vector v: " << v << std::endl;
    std::cout << "Its maximum coefficient (" << maxOfV
        << ") is at position " << i << std::endl;
}
