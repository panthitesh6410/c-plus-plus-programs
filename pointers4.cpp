// Pointers and Arrays :

#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    
    cout<<a<<endl;     // gives address of 1st element (base address)
    cout<<*a<<endl;           // value of 1st element
    cout<<a+1<<endl;     // gives address of 2nd element (base address)
    cout<<*(a+1)<<endl<<endl;           // value of 2nd element

    // to access addressse and values of each element in array using loops :
    
    for(int i=0;i<5;i++)
    {
        cout<<"Address of "<<i<<"th element - "<<(a + i)<<" OR "<<&a[i]<<endl;
        cout<<"Value of "<<i<<"th element - "<<*(a + i)<<" OR "<<a[i]<<endl;
        cout<<endl;
    } 

    return 0;
}