// Example4.cpp
// Block operations for vectors

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::ArrayXf v(6);
    v << 1, 2, 3, 4, 5, 6;
    std::cout << "v.head(3) =" << std::endl
        << v.head(3) << std::endl << std::endl;
    std::cout << "v.tail<3>() = " << std::endl
        << v.tail<3>() << std::endl << std::endl;
    v.segment(1, 4) *= 2;
    std::cout << "after 'v.segment(1,4) *= 2', v =" << std::endl
        << v << std::endl;
}
