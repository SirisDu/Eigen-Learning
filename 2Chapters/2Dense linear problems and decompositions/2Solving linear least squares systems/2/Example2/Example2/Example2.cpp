// Example2.cpp
// Using the QR decomposition

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXf A = MatrixXf::Random(3, 2);
    VectorXf b = VectorXf::Random(3);
    cout << "The solution using the QR decomposition is:\n"
        << A.colPivHouseholderQr().solve(b) << endl;
}
