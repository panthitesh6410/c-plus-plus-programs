//codevita problem (vita sum) :

#include<iostream>
using namespace std;

int fact(int num)
{
    int result=1;
    for(int i=num;i>=1;i--)
    {
        result*=i;
    }
    return result;
}
int calc(int n,int r)
{
    int result=(fact(n))/((fact(n-r))*(fact(r)));
    return result;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<=k;i++)
    {
        if(i%2==0)
        {
            sum+=calc(n,i);
        }
    }    
    cout<<sum;
    return 0;
}
