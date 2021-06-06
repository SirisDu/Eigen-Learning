// Example2.cpp
// Columns and rows

#include <iostream>
#include <Eigen/Dense>

int main()
{
    Eigen::MatrixXf m(3, 3);
    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    std::cout << "Here is the matrix m:" << std::endl << m << std::endl;
    std::cout << "2nd Row: " << m.row(1) << std::endl;
    m.col(2) += 3 * m.col(0);
    std::cout << "After adding 3 times the first column"
        " into the third column, the matrix m is:\n";
    std::cout << m << std::endl;
}
