//coin flip problem(codechef):
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int g;
        cin>>g;
        for(int j=1;j<=g;j++)
        {
            int i,n,q;
            cin>>i>>n>>q;
            int arr[n];
            if(i==1)        
            {
                for(int k=1;k<=n;k++)
                    arr[k]=1;           // here 1 stands for head.
            }
            else
            {
                for(int k=1;k<=n;k++)
                    arr[k]=2;           // here 2 stands for tail.
            }
            for(int k=1;k<=n;k++)
            {
                for(int l=1;l<=k;l++)
                {
                    if(arr[l]==1)
                        arr[l]=2;
                    else
                        arr[l]=1;
                }
            }
            int count=0;
            for(int k=1;k<=n;k++)
            {
                if(arr[k]==q)
                    count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}