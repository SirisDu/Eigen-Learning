// Example1.cpp
// Reshape

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
    MatrixXf M1(3, 3);    // Column-major storage
    M1 << 1, 2, 3,
          4, 5, 6,
          7, 8, 9;

    Map<RowVectorXf> v1(M1.data(), M1.size());
    cout << "v1:" << endl << v1 << endl;

    Matrix<float, Dynamic, Dynamic, RowMajor> M2(M1);
    Map<RowVectorXf> v2(M2.data(), M2.size());
    cout << "v2:" << endl << v2 << endl;
    std::cout << std::endl;

    MatrixXf M3(2, 6);    // Column-major storage
    M3 << 1, 2, 3,  4,  5,  6,
          7, 8, 9, 10, 11, 12;

    Map<MatrixXf> M4(M3.data(), 6, 2);
    cout << "M4:" << endl << M4 << endl;
}
