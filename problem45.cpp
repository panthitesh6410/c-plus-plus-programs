// HackerRank Problem - Minimum Distances :

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> index;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
                index.push_back(abs(i-j));
        }
    }
    // cout<<!index.empty();
    if(!index.empty())
    {
        int min=index[0];
        for(int i=0;i<index.size();i++)
        {
            if(index[i] <= min)
                min = index[i];
        }
    cout<<min;
    }
    else    
        cout<<-1;
        
    return 0;
}