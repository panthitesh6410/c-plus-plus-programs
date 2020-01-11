// HackerRank Problem :

#include<iostream>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    int arr[n];
    for(int k=0;k<n;k++)
        cin>>arr[k];
    for(int k=0;k<t;k++)
    {
        int i, j;
        cin>>i>>j;
        int min = arr[i];
        for(int p=i;p<=j;p++)
        {
            if(arr[p] <= min)
                min = arr[p];
        }
        cout<<min<<endl;
    }
    return 0;
}

// Input :
// ==================================
// 8 5
// 2 3 1 2 3 2 3 3
// 0 3
// 4 6
// 6 7 
// 3 5 
// 0 7 

// Output :
// ================================
// 1
// 2
// 3
// 2
// 1