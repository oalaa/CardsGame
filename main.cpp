#include <iostream>
#include <iomanip>
#include <cassert>
#include "matrix.h"

using namespace std;

int main()
{
    int data1 [] = {1,0,0,0,1,0,0,0,1};
    int data2 [] = {13,233,18,5,6,7};
    int data3 [] = {10,100,10,100,10,100,10,100};
    matrix mat1, mat2, mat3 ;
    mat1.createMatrix (3, 3, data1, mat1);
    mat2.createMatrix (2, 3, data2, mat2);
    mat3.createMatrix (4, 2, data3, mat3);
    // The next code will not work until you write the functions
    cout << mat1 << endl;
     cout << mat2 << endl;
     cout << mat3 << endl;
     if (mat1==mat3)
     {
         cout << "True" <<endl;
     }
     else
     {
         cout << "False" << endl;
     }
     if (mat1 != mat3)
     {
         cout << "True" << endl;
     }
     else
     {
         cout << "False" << endl;
     }
     cout << mat1.isSquare(mat1) << endl ;
     cout << mat1.isIdentity(mat1) << endl ;
     cout << mat2.isSymetric(mat1) <<endl;
     cout << mat3.transpose(mat3);

    return 0;

}
