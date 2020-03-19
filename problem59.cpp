// codeforces - helpful maths :

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(int(s[i])) == 1)
        {
            v.push_back(s[i]);
        }
    }
    // now sort vector
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i != v.size()-1)
            cout<<"+";
    }
    return 0;
}