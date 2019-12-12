#pragma once

class Matrix3x3
{
private:
    int matrix[3][3] = { {0,0,0},{0,0,0},{0,0,0} };

public:
    Matrix3x3() = default;
    Matrix3x3(int mm[3][3]);

    void interchange(int row1, int row2);
    void print();
    void multiplyRow(int row, int multiplier);
    void addOneRowToAnother(int addThisRow, int toThisRow);
};
