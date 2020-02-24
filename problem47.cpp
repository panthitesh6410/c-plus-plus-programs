// make all array elements odd with minimum operations of given type :

#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    int count = 0;
    int i=0;
    while(v[i] % 2 == 0)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i] == v[j])
                v[j] = v[j] - v[i];
        }
    }

    return 0;
}