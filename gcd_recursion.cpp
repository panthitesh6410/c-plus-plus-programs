#include<iostream>
using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    cout<<"HCF/GCD = "<<gcd(num1, num2);
    return 0;
}