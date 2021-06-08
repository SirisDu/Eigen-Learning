// Example1.cpp
// Basic linear solving

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    Matrix3f A;
    Vector3f b;
    A << 1,  2,  3,
         4,  5,  6,
         7,  8, 10;
    b << 3, 3, 4;
    cout << "Here is the matrix A:\n" << A << endl;
    cout << "Here is the vector b:\n" << b << endl;
    Vector3f x = A.fullPivHouseholderQr().solve(b);
    cout << "The solution is:\n" << x << endl << endl;

    Matrix2f A1, b1;
    A1 << 2, -1,
         -1,  3;
    b1 << 1, 2,
          3, 1;
    cout << "Here is the matrix A1:\n" << A1 << endl;
    cout << "Here is the right hand side b1:\n" << b1 << endl;
    Matrix2f x1 = A1.ldlt().solve(b1);
    cout << "The solution is:\n" << x1 << endl;
}
