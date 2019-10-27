// HackerRank Problem Solution (problem solving section)

#include<iostream>

using namespace std;

int main()
{
    int s, t, a, b, m, n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples[m], oranges[n];
    for(int i=0;i<m;i++)
        cin>>apples[i]; 
    for(int i=0;i<n;i++)
        cin>>oranges[i];
    int count_apples=0, count_oranges=0;
    for(int i=0;i<m;i++)
        apples[i] = apples[i] + a;
    for(int i=0;i<n;i++)
        oranges[i] = oranges[i] + b;
    for(int i=0;i<m;i++)
    {
        if(apples[i]>=s && apples[i]<=t)
            count_apples++;
    }
    for(int i=0;i<n;i++)
    {
        if(oranges[i]>=s && oranges[i]<=t)
            count_oranges++;
    }
    cout<<count_apples<<endl;
    cout<<count_oranges;

    return 0;
}
