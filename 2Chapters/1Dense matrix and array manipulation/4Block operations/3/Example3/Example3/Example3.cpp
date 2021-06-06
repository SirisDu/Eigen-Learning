// Example3.cpp
// Corner-related operations

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::Matrix4f m;
    m << 1,  2,  3,  4,
         5,  6,  7,  8,
         9, 10, 11, 12,
        13, 14, 15, 16;
    std::cout << "m.leftCols(2) =" << std::endl
        << m.leftCols(2) << std::endl << std::endl;
    std::cout << "m.bottomRows<2>() =" << std::endl
        << m.bottomRows<2>() << std::endl << std::endl;
    m.topLeftCorner(1, 3) = m.bottomRightCorner(3, 1).transpose();
    std::cout << "After assignment, m = " << std::endl
        << m << std::endl;
}
