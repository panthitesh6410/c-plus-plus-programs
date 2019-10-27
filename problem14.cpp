//TCS codevita problem :

#include<iostream>

using namespace std;

bool isprime(int num)
{
    int count = 0;
    for(int i=1 ;i<=num ;i++)
    {
        if(num % i == 0)
            count++;
    }
    if(count == 2)
        return true;
    else
        return false;
}
int prime_factors(int num)
{
    int count=0;
    for(int i=2;i<=(num/2);i++)
    {
        if(isprime(i) && i!=num && i>1)
        {
            count++;
            num-=i;
        }
    }
    return count;
}
int main()
{
    int n, count=0;
    scanf("%d", &n);
    for(int i=3;i<=n;i++)
    {
        if(isprime(i))
        {
            count = prime_factors(i);
        }
    }
    cout<<count;
    return 0;
}