#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

using namespace std;


class matrix
{
public:
    matrix();
    int getRow (int row) const;
    int getColomun (int col) const;
    void createMatrix( int row, int col, int num[], matrix& mat);
    friend ostream& operator<< (ostream& out, matrix mat);
    bool   isSquare   (matrix mat);
    bool   isIdentity (matrix mat);
    bool   isSymetric (matrix mat);
    matrix transpose(matrix& mat);
    bool   operator== (matrix& mat);
    bool   operator!= (matrix& mat);

    virtual ~matrix();

protected:

private:
    int* data;
    int row, col ;
};

#endif // MATRIX_H
