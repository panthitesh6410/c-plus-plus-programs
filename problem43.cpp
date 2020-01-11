// Hackerank Problem - Equalize the Array :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count[n];
    for(int i=0;i<n;i++)
        count[i]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
                count[i]++;
        }
    }
    int max=count[0], index;
    for(int i=0;i<n;i++)
    {
        if(count[i] >= max)
        {
            max = count[i];
            index = i;
        }
    }
    int finalcount = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[index])
            finalcount++;
    }
    cout<<finalcount;
    return 0;
}

// Sample Input :
// 5
// 3 3 2 1 3

// Sample Output :
// 2   
