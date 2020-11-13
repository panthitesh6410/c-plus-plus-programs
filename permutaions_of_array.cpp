// find all permutaions of an array elements using STL

#include<algorithm>
#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n = 3;
    int arr[n] = {14, 5, 30};
    sort(arr, arr+n);
    display(arr, n);
    while(next_permutation(arr, arr+n))
    {
        display(arr, n);
    }
    return 0;
}