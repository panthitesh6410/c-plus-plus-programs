#include<iostream>
using namespace std;
int binary_search(int arr[], int l, int h, int num)
{
    if(l<=h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == num)
            return mid;
        else
        {
            if(arr[mid] > num)
                binary_search(arr, l, mid-1, num);
            else
                binary_search(arr, mid+1, h, num);
        }
    }
    return -1;
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
    if(binary_search(arr, 0, n-1, num) == -1)
        cout<<num<<" is absent";
    else
        cout<<num<<" is present";
    return 0;
}