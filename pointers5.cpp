// Arrays as Function Arguments :

#include<iostream>
using namespace std;

// function takes only base address of array as argument -
 
int SumOfElements(int *A, int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum = sum + A[i];
    return sum;
}

int main()
{
    int A[]={1, 2, 3, 4, 5};
 
    int size = sizeof(A)/sizeof(A[0]);
 
    int total = SumOfElements(A, size);
 
    cout<<total;

    return 0;
}