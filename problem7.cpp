#include<iostream>
using namespace std;

void sort(long int arr[],int n)
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
        int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,n);
        int mean,sum=0;
        for(int j=0;j<n;j++)
            sum=sum+arr[j];
        mean=sum/n;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==mean && sum%n==0)
                flag=1;
        }
        if(flag==1)
            cout<<mean<<endl;
        else 
            cout<<"Impossible"<<endl;
    }
    return 0;
}