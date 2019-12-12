// Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This file is intended for debugging and testing out these classes.

#include <iostream>

#include "Matrix3x3.h"

int main()
{
    Matrix3x3 m1;

    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    Matrix3x3 m2(arr);

    m2.print();

    // swap rows 0 and 1
    m2.interchange(0, 1);

    m2.print();

    // multiply row 2 by 10
    m2.multiplyRow(2, 10);

    m2.print();

    return 0;
}
