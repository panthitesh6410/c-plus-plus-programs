// HackerRank - hourglass problem

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
            cin>>arr[i][j];
    }
    vector<int> res;
    int k=0;

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            res.push_back(arr[i][j] + arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1]);
        }
    }
    int max = res[0];
    for(int i=0;i<res.size();i++)
    {
        if(res[i] >= max)
            max = res[i];
        
    }
    cout<<max;
    return 0;
}