// Pointers and Multi-Dimensional Arrays :

#include<iostream>
using namespace std;

int FuncA(int A[][3])   // for 2-d array
{
    cout<<"print 2D array : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

int FuncB(int (*B)[2][2])   // for 3-d array
{
    return 0;
}

int main()
{
    int C[3][2][2] = {
                        {{2, 5}, {7, 9}},
                        {{3, 4}, {6, 1}},
                        {{0, 8}, {11, 13}}
                    };
    cout<<C<<endl;   // base-address of multidimensional array
    cout<<*C<<endl;   // base-address of multidimensional array
    cout<<C[0]<<endl;   // base-address of multidimensional array
    cout<<C[0][0]<<endl;   // base-address of multidimensional array 
    cout<<*(C[0][0]+1)<<endl;  // print 5

// ***************************************************************

// multi-D arrays as function arg.

    int A[2][3] = {{2,4,6}, {5,7,8}};
    FuncA(A);

    int B[2][2][2] = {
            {{2,4}, {2,4}}, 
            {{5,7}, {2,4}}
        };

    FuncA(A);   // for 2-d array
    
    FuncB(B);     

    return 0;
}

