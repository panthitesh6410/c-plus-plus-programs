// HackerRank - Minimum Swap 2 :

#include<iostream>
using namespace std;

// void swap(int num1, int num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
    cout<<"\n"<<count;
    // output will be the minimum swaps required to sort the array.
    return 0;
}