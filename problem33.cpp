// hackerrank : Left-Rotation 

#include<iostream>
using namespace std;
int main()
{
    int n, d;
    cin>>n>>d;              // size of array, no.of rotations
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int r = n % d;
    int final[n];
    for(int i=0;i<n;i++)
    {
        int k = (i+r) % n;
        final[k] = arr[i];
    }
    for(int i=0;i<n;i++)
        cout<<final[i]<<" ";
    return 0;
}