#include<iostream>
using namespace std;

int main()
{
    int T;
    cout<<"enter test cases :"<<endl;
    cin>>T;
    for(int j=1;j<=T;j++)
    {
        int num;
        cout<<"enter number :"<<endl;
        cin>>num;
        int primes[]={7,5,3,2};
        int U=num;
        int count=0;
        for(int i=0;i<4;i++)
        {
            if(primes[i]<=U)
            {
                U=U-primes[i];
                //cout<<primes[i]<<endl;
                count++;
            }
        }
        if(U==0)
            cout<<"count="<<count;
        else
            cout<<"-1";
    }
    return 0;
}