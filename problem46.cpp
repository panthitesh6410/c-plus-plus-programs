// HackerRank Problem - Electronics Shop :
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int b, n, m;
    cin>>b>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    vector<int> result;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            result.push_back(arr1[i] + arr2[j]);
        }
    }
    int max = result[0];
    for(int i=0;i<result.size();i++)
    {
        if(result[i] >= max && result[i] <= b)
            max = result[i];                                                
    }   
    if(max >  b)
        cout<<-1; 
    else
        cout<<max;
    
    // for(int i=0;i<result.size();i++)
    //     cout<<result[i]<<endl;
    return 0;
}