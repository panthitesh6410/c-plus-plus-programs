//TCS codevita problem :s

#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int candy[N];
        for(int j=0;j<N;j++)
        {
            cin>>candy[j];
        }
        int sum[N];
        for(int j=0;j<N;j++)
            sum[j]=0;
        bubble_sort(candy, N);
        for(int j=0;j<=N-2;j++)
        {
            sum[j]=candy[j]+candy[j+1];
            candy[j+1]=candy[j]+candy[j+1];
        }
        int total_sum=0;
        for(int j=0;j<N;j++)
            total_sum=total_sum+sum[j];
        cout<<total_sum<<endl;
    }
    return 0;
}