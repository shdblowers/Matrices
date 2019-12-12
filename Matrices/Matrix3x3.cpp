#include <iostream>

#include "Matrix3x3.h"

using std::cout;
using std::endl;

Matrix3x3::Matrix3x3(int mm[3][3]) : matrix()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = mm[i][j];
        }
    }
}

void Matrix3x3::interchange(int row1, int row2)
{
    if (row1 < 0 || row1 > 2 || row2 < 0 || row2 > 2) {
        return;
    }

    for (int i = 0; i < 3; i++) {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }

    return;
}

void Matrix3x3::print()
{
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << "| ";

        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << "|" << endl;
    }

    cout << endl;
}

void Matrix3x3::multiplyRow(int row, int multiplier)
{
    if (row > 2 || row < 0) {
        return;
    }

    for (int i = 0; i < 3; i++) {
        matrix[row][i] = matrix[row][i] * multiplier;
    }

    return;
}

void Matrix3x3::addOneRowToAnother(int addThisRow, int toThisRow)
{
    for (int i = 0; i < 3; i++) {
        matrix[toThisRow][i] = matrix[addThisRow][i] + matrix[toThisRow][i];
    }
}
