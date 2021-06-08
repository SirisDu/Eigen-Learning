// Example7.cpp
// Rank-revealing decompositions

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    Matrix3f A;
    A << 1, 2, 5,
         2, 1, 4,
         3, 0, 3;
    cout << "Here is the matrix A:\n" << A << endl;
    FullPivLU<Matrix3f> lu_decomp(A);
    cout << "The rank of A is " << lu_decomp.rank() << endl;
    cout << "Here is a matrix whose columns form"
        "a basis of the null-space of A:\n"
        << lu_decomp.kernel() << endl;
    cout << "Here is a matrix whose columns form"
        "a basis of the column-space of A:\n"
        << lu_decomp.image(A) << endl; // yes, have to pass the original A

    Matrix2d A1;
    A1 << 2, 1,
          2, 0.9999999999;
    FullPivLU<Matrix2d> lu(A1);
    cout << "By default, the rank of A is found to be " << lu.rank() << endl;
    lu.setThreshold(1e-5);
    cout << "With threshold 1e-5, the rank of A is found to be "
        << lu.rank() << endl;
}
