#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    
    int *p;             // integer pointer storing address of x
    p = &x;

    // pointers are strongly typed

    int** q = &p;        // pointer to pointer storing address of p 

    cout<<**q<<endl;    // value of x
    cout<<*q<<endl;     // value of p i.e. address of x
    cout<<q<<endl;      // address of p
    cout<<&q<<endl;     // address of r

    // cout<<&q+1<<endl;   // next address  

    **q = 6 ;            // dereferencing value of x
    cout<<x ;           //new value of x

    return 0;
}