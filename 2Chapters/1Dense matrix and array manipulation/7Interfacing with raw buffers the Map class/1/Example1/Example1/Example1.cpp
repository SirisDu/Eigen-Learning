// Example1.cpp
// Map types and declaring Map variables

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
    int array[8];
    for (int i = 0; i < 8; ++i) array[i] = i;
    std::cout << "Column-major:\n"
        << Map<Matrix<int, 2, 4> >(array) << std::endl;
    std::cout << "Row-major:\n"
        << Map<Matrix<int, 2, 4, RowMajor> >(array) << std::endl;
    std::cout << "Row-major using stride:\n"
        << Map<Matrix<int, 2, 4>, Unaligned, Stride<1, 4> >(array)
        << std::endl;
}
