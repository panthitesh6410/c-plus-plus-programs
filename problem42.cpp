// HackerRank Problem - Cut the Sticks

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> sticks;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        sticks.push_back(num);
    }
    while(!sticks.empty())
    {
        cout<<sticks.size()<<endl;
        int min = sticks[0];
        for(int i=0;i<sticks.size();i++)
        {
            if(sticks[i] <= min)
                min=sticks[i];
        }
        for(int i=0;i<sticks.size();i++)
        {
            sticks[i] -= min;
            if(sticks[i] <= 0)
                sticks.erase(sticks.begin()+i);
        }
   }
    
    return 0;
}

// Input :
// 6
// 5 4 4 2 2 8

// Output :
// 6
// 4
// 2
// 1