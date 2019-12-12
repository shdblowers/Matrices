#include "Matrix3x3.h"

#include <iostream>

using std::cout;
using std::endl;

Matrix3x3::Matrix3x3(int mm[3][3]) : m()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] = mm[i][j];
        }
    }
}

void Matrix3x3::interchange(int row1, int row2)
{
    if (row1 < 0 || row1 > 2 || row2 < 0 || row2 > 2) {
        return;
    }

    for (int i = 0; i < 3; i++) {
        int temp = m[row1][i];
        m[row1][i] = m[row2][i];
        m[row2][i] = temp;
    }

    return;
}

void Matrix3x3::print()
{
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << "| ";

        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << " ";
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
        m[row][i] = m[row][i] * multiplier;
    }

    return;
}

void Matrix3x3::addOneRowToAnother(int addThisRow, int toThisRow)
{
    for (int i = 0; i < 3; i++) {
        m[toThisRow][i] = m[addThisRow][i] + m[toThisRow][i];
    }
}
