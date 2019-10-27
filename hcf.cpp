#include<iostream>
using namespace std;
int main()
{
    int a,b,gcd;
    std::cout<<"enter 2 numbers : "<<endl;
    std::cin>>a>>b;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    std::cout<<"HCF of "<<a<< " & "<<b<<" is "<<gcd; 
    return 0;
}

