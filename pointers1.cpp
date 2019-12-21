#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;            // p is an integer pointer which contains address of a
    
    cout<<p<<endl;          // address of a
    cout<<&a<<endl;         // address of a
    cout<<&p<<endl;         // address pf pointer p
    cout<<*p<<endl;         // value of a
    cout<<p+1<<endl;        // next address (+4 bits)

    *p = 20;                // dereferencing
    cout<<a<<endl;          // new value of a 

    cout<<sizeof(p);        // size of pointer p datatype(int) in bytes 

    return 0;
}

