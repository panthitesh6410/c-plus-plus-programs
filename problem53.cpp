// hackerrank problem :
// count of digit divisors of an integer 
// INPUT : 121
// OUTPUT : 3

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int ori=n, count=0;
        while(n != 0)
        {
            int d = n % 10;
            if(d != 0)
            {    
                if(ori % d == 0)
                    count++;
            }
            n = n / 10;
        }
        cout<<count<<endl;
    }
    return 0;
}