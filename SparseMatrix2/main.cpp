#include <iostream>
#include "SparseMatrix.h"

int main() {
    SparseMatrix m1(3, 3);
    SparseMatrix m2(3, 3);
    m1.setElement(1, 1, 2);
    m2.setElement(1, 1, 3);
    SparseMatrix m3 = m1 + m2;
    std::cout << m3.getElement(1, 1);
    return 0;
}