// Example3.cpp
// Transposition and conjugation

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXcf a = Eigen::MatrixXcf::Random(2, 2);
    std::cout << "Here is the matrix a\n" << a << std::endl;
    std::cout << "Here is the matrix a^T\n" << a.transpose() << std::endl;
    std::cout << "Here is the conjugate of a\n" << a.conjugate() << std::endl;
    std::cout << "Here is the matrix a^*\n" << a.adjoint() << std::endl;

    std::cout << std::endl;
    Eigen::Matrix2i a1;
    a1 << 1, 2,
          3, 4;
    std::cout << "Here is the matrix a1:\n" << a1 << std::endl;
    a1 = a1.transpose(); // !!! do NOT do this !!!
    std::cout << "Trying to do a1 = a1.transpose()" << std::endl;
    std::cout << "and the result of the aliasing effect:\n" << a1 << std::endl;

    std::cout << std::endl;
    Eigen::MatrixXf a2(2, 3);
    a2 << 1, 2,
          3, 4,
          5, 6;
    std::cout << "Here is the initial matrix a2:\n" << a2 << std::endl;
    a2.transposeInPlace();
    std::cout << "Performing right in-place transposition:" << std::endl;
    std::cout << "and after being transposed:\n" << a2 << std::endl;
}
