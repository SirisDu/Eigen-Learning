// Example5.cpp
// Converting between array and matrix expressions

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf m(2, 2);
    Eigen::MatrixXf n(2, 2);
    Eigen::MatrixXf result(2, 2);

    m << 1, 2,
         3, 4;
    n << 5, 6,
         7, 8;

    result = m * n;
    std::cout << "-- Matrix m*n: --" << std::endl
        << result << std::endl << std::endl;

    result = m.array() * n.array();
    std::cout << "-- Array m*n: --" << std::endl
        << result << std::endl << std::endl;

    result = m.cwiseProduct(n);
    std::cout << "-- With cwiseProduct: --" << std::endl
        << result << std::endl << std::endl;

    result = m.array() + 4;
    std::cout << "-- Array m + 4: --" << std::endl
        << result << std::endl << std::endl;


    result = (m.array() + 4).matrix() * m;
    std::cout << "-- Combination 1: --" << std::endl
        << result << std::endl << std::endl;

    result = (m.array() * n.array()).matrix() * m;
    std::cout << "-- Combination 2: --" << std::endl
        << result << std::endl << std::endl;
}
