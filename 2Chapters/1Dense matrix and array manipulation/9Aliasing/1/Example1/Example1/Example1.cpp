// Example1.cpp
// a simple example exhibiting aliasing

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
    MatrixXi mat(3, 3);
    mat << 1, 2, 3,
           4, 5, 6,
           7, 8, 9;
    cout << "Here is the matrix mat:\n" << mat << endl;

    // This assignment shows the aliasing problem
    mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2);
    cout << "After the assignment, mat = \n" << mat << endl;
}
