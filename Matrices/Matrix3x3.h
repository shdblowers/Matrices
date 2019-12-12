#pragma once
class Matrix3x3
{
private:
    int m[3][3] = { {0,0,0},{0,0,0},{0,0,0} };

public:
    Matrix3x3() = default;
    Matrix3x3(int mm[3][3]);

    void interchange(int, int);
    void print();
};

