// Example2.cpp
// Resolving aliasing issues

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
    MatrixXi mat(3, 3);
    mat << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    cout << "Here is the matrix mat:\n" << mat << endl;

    // The eval() solves the aliasing problem
    mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2).eval();
    cout << "After the assignment, mat = \n" << mat << endl;

    MatrixXf a(2, 3);
    a << 1, 2, 3,
         4, 5, 6;
    cout << "Here is the initial matrix a:\n" << a << endl;

    a.transposeInPlace();
    cout << "and after being transposed:\n" << a << endl;
}
