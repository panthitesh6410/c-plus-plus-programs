// HackerRank Problem - Cut the Sticks

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    while(true)     // doubtfull loop
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
                count++;
        }
        cout<<count;   
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=min)
                min=arr[i];
        }
        for(int i=0;i<n;i++)
            arr[i]-=min;
        // if(count==1)
        //     break;

    }

    return 0;
}

// Input :
// 6
// 5 4 4 2 2 8

// Output :
// 6
// 4
// 2
// 1