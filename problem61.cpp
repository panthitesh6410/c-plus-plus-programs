// codeforces - Football

#include<iostream> 
using namespace std;
int main()
{
    string s, result = "NO";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int count = 0;
        for(int j=i;j<s.size();j++)
        {
            if(s[i] == s[j])
                count++;
        }
        if(count >= 7)
        {
            result = "YES";
            break;
        }
    }
    cout<<result;
    return 0;
}