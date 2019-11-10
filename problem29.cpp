// check whether thw sum and multiplication of digits of a number are equal or not .

#include<iostream>
using namespace std;
int main()
{
    int num, sum = 0, mul = 1;
    cin>>num;
    while(num!=0)
    {
       int d = num % 10;
       sum += d;
       mul *= d;
       num = num / 10; 
    }
    if(sum == mul)
        cout<<"addition and multiplication of digits of entered number is same";
    else
        cout<<"addition and multiplication of digits of entered number is not same";
    return 0;
}