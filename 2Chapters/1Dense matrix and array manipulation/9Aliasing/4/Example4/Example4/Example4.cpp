// Example4.cpp
// Aliasing and matrix multiplication

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
    MatrixXf matA(2, 2);
    matA << 2, 0,
            0, 2;
    matA = matA * matA;
    cout << matA << endl << endl;

    MatrixXf matB(2, 2);
    matA << 2, 0,
            0, 2;
    // Simple but not quite as efficient
    matB = matA * matA;
    cout << matB << endl << endl;

    // More complicated but also more efficient
    matB.noalias() = matA * matA;
    cout << matB << endl << endl;

    MatrixXf A1(2, 2), B1(3, 2);
    B1 << 2, 0,
          0, 3,
          1, 1;
    A1 << 2,  0,
          0, -2;
    A1 = (B1 * A1).cwiseAbs();
    cout << A1 << endl << endl;

    A1 << 2,  0,
          0, -2;
    A1 = (B1 * A1).eval().cwiseAbs();
    cout << A1 << endl;
}
