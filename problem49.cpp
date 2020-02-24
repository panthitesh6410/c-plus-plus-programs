
// program to print reverse of an array using pointers -

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    // declare a int pointer that points to the begining of the array 
    // then, increment 4 till we reach end of array 
    // now, print value at last address then, decrement address by 4 th get previous value 
    // repeat above step to print array elements in reverse order
    

    return 0;
} 
