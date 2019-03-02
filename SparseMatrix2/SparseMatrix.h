//
// Created by Пользователь on 02.03.2019.
//

#ifndef SPARSEMATRIX2_SPARSEMATRIX_H
#define SPARSEMATRIX2_SPARSEMATRIX_H

#endif //SPARSEMATRIX2_SPARSEMATRIX_H

#include <map>
using namespace std;
class SparseMatrix{
    int width;
    int height;
    map<pair<int , int >, int> data;
public:
    SparseMatrix(int w, int h): width(w), height(h){};
    int getWidth(){return width;}
    int getHeight(){return height;}
    void setElement(int i, int j, int elt);
    int getElement(int i, int j);
    SparseMatrix operator+ (const SparseMatrix& matrix) const;
    SparseMatrix operator* (const SparseMatrix& matrix) const;

};