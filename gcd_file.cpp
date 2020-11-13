#include<iostream>
using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
    unsigned int rem;
    do{
        rem = a%b;
        if(rem==0)
            break;
        a=b;
        b=rem;
    }while(1);
    return b;
}
