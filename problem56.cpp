// codeforces : next round -

#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //check for all non-zero elements:
    int no=0, pos=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
            no++;
        if(arr[i]>0)
            pos++;
    }
    if(no == n-1)
        cout<<0;
    else 
    {
        int count = 0;
        int index = arr[k];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=index)
                count++;
        }
        cout<<count;
    }
    return 0;
}