//
// Created by Пользователь on 02.03.2019.
//
#include "SparseMatrix.h"

using namespace std;

void SparseMatrix::setElement(int i, int j, int elt) {
    data[pair<int, int>(i, j)] = elt;
}
int SparseMatrix::getElement(int i, int j) {
    map<pair<int, int>, int>::const_iterator it;
    it = data.find(pair<int, int>(i, j));
    return (it == data.end() ? 0 : it->second);
}
SparseMatrix SparseMatrix::operator+(const SparseMatrix& matrix) const{
    SparseMatrix result = *this;
    for(map<pair<int, int>, int>::const_iterator it = matrix.data.begin(); it != matrix.data.end(); it++) {
        if (it->second != 0) {
            int i = it->first.first;
            int j = it->first.second;
            int value = it->second;
            result.setElement(i, j, result.getElement(i, j) + value);

        }
    }
    return result;
}
SparseMatrix SparseMatrix::operator*(const SparseMatrix& matrix) const{
    SparseMatrix result(height, matrix.width);
    for(map<pair<int, int>, int>::const_iterator it = data.begin(); it != data.end(); it++){
        int i = it->first.first;
        int j = it->first.second;
        int firstMultiplyer = it->second;
        for(map<pair<int, int>, int>::const_iterator it = matrix.data.begin(); it != matrix.data.end(); it++){
            int m_i = it->first.first;
            int m_j = it->first.second;
            int secondMultyplyer = it->second;
            if(m_i == j ){
                result.setElement(i, j, firstMultiplyer * secondMultyplyer);
            }
        }
    }
    return result;
}