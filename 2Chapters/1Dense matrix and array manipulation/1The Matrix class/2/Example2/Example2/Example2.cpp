// Example2.cpp
// Assignment and resizing

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXd m(2, 5);
    m.resize(4, 3);
    std::cout << "The matrix m is of size "
        << m.rows() << "x" << m.cols() << std::endl;
    std::cout << "It has " << m.size() << " coefficients" << std::endl;
    Eigen::VectorXd v(2);
    v.resize(5);
    std::cout << "The vector v is of size " << v.size() << std::endl;
    std::cout << "As a matrix, v is of size "
        << v.rows() << "x" << v.cols() << std::endl;

    std::cout << "Trying to change a fixed-size matrix:" << std::endl;
    Eigen::Matrix4d m2;
    m2.resize(4, 4); // no operation
    std::cout << "The matrix m is of size "
        << m2.rows() << "x" << m2.cols() << std::endl;

    std::cout << "Assignment and resizing:" << std::endl;
    Eigen::MatrixXf a(2, 2);
    std::cout << "a is of size " << a.rows() << "x" << a.cols() << std::endl;
    Eigen::MatrixXf b(3, 3);
    a = b;
    std::cout << "a is now of size " << a.rows() << "x" << a.cols()
        << std::endl;
}
