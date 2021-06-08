// Example3.cpp
// Using normal equations

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXf A = MatrixXf::Random(3, 2);
    VectorXf b = VectorXf::Random(3);
    cout << "The solution using normal equations is:\n"
        << (A.transpose() * A).ldlt().solve(A.transpose() * b) << endl;
}
