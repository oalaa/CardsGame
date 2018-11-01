#include "matrix.h"

matrix::matrix()
    {
        this->row = row ;
        this->col = col ;

    }
    int matrix::getRow (int row) const
    {
        return (row);
    }
    int matrix::getColomun (int col) const
    {
        return (col);
    }
    void matrix::createMatrix( int row, int col, int num[], matrix& mat)
    {
        mat.row = row;
        mat.col = col;
        mat.data = new int [row * col];
        for (int i = 0; i < row * col; i++)
            mat.data [i] = num [i];
    }

    bool   matrix::isSquare   (matrix mat)
    {
        if (mat.row == mat.col)
        {
            return true;
        }
        else
            return false;
    }
    bool   matrix::isIdentity (matrix mat)
    {


        if (isSquare(mat) ==1 )
        {
            for (int i = 0; i < mat.row; i++)
            {
                for (int j = 0; j < mat.col; j++)
                {
                    if (i == j && mat.data[i*mat.col+j] == 1) {}
                    else if (i!= j && mat.data[i*mat.col+j] == 0)
                        return true;
                }
            }
            return false;
        }
        else
            return false;
    }
    bool   matrix::isSymetric (matrix mat)
    {
        if (isSquare(mat) == 1)
        {


            for (int i=0 ; i< mat.row ; i++)
            {
                for (int j=0 ; j< mat.col ; j++)
                {
                    if (mat.data[i*mat.col+j] == mat.data[j*mat.col+i])
                    {
                        return true;

                    }
                    else
                        return false;
                }
            }
        }
        else
            return false;
    }

    matrix matrix::transpose(matrix& mat)
    {
        matrix TransposeMatrix;
        TransposeMatrix.row = mat.col;
        TransposeMatrix.col = mat.row;
        TransposeMatrix.data = new int [TransposeMatrix.col * TransposeMatrix.row];


        for (int i=0 ; i<mat.row ; i++)
        {
            for (int j=0 ; j<mat.col ; j++)
            {
                TransposeMatrix.data[j*mat.row+i] = mat.data[i*mat.col+j];
            }
        }
        return TransposeMatrix;
    }
    bool   matrix::operator== (matrix& mat)
    {
        if ((mat.row == mat.row) && (mat.col == mat.col))
        {
            for (int i=0 ; i<mat.row ; i++ )
            {
                for (int j=0 ; j<mat.col ; j++)
                {
                    if (mat.data[i*mat.col+j] == mat.data[i*mat.col+j])
                    {
                        return true;
                    }
                    else
                        return false;
                }
            }
        }
        else
        {
            return false;
        }

    }
    bool   matrix::operator!= (matrix& mat)
    {
        if ((mat.row == mat.row) && (mat.col == mat.col))
        {
            for (int i=0 ; i<mat.row ; i++ )
            {
                for (int j=0 ; j<mat.col ; j++)
                {
                    if (mat.data[i*mat.col+j] != mat.data[i*mat.col+j])
                    {
                        return true;
                    }
                    else
                        return false;
                }
            }
        }
        else if ((mat.row != mat.row) && (mat.col != mat.col) )
            return true;
    }
ostream& operator<< (ostream& out, matrix mat)
{
    out << "The Content Of Matrix : "<< endl;

    for (int i=0 ; i<mat.row ; i++)
    {
        for (int j=0 ; j<mat.col ; j++)
        {
            out << mat.data[i*mat.col+j] << " ";
        }
        cout << endl;

    }
    cout << endl;
    return out ;
}
matrix::~matrix()
{
    //dtor
}
