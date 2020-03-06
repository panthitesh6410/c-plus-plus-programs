// hackerrank problem - Lonely Interger :

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int index;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count[n];
    for(int i=0;i<n;i++)
        count[i] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j] && i != j)
            count[i]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count[i] == 1)
            index = i;
    }
    cout<<arr[index];
    return 0;
}