#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int num)
{
    int l=0, h=n-1;
    while(l<h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == num)
            return 1;
        else
        {
            if(arr[mid]>num)
                h = mid-1;
            else
                l = mid+1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int num;
    cin>>num;
    if(binary_search(arr, n, num))
        cout<<num<<" is present";
    else    
        cout<<num<<" is absent";
    return 0;
}