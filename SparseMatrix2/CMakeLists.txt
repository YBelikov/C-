cmake_minimum_required(VERSION 3.12)
project(SparseMatrix2)

set(CMAKE_CXX_STANDARD 14)

add_executable(SparseMatrix2 main.cpp SparseMatrix.h SparseMatrix.cpp)