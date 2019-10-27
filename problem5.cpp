//paying up problem(codechef):
#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        int money[20];
        for(int j=0;j<n;j++)
            cin>>money[j];
        sort(money,n);
        int U=m;
        for(int j=n-1;j>=0;j--)
        {
            if(money[j]<=U)
                U=U-money[j];
        }
        if(U==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}