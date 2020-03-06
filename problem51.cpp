// hackerank problem  Alternating Characters :
// (INPUT) : AAABBBAABB 
// (OUTPUT) : 6


# include<iostream>
using namespace std;

int main()
{
    int q;
    cin>>q;

    for(int i=1;i<=q;i++)
    {
        int count = 0;
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            while(s[j] == s[j+1])
            {
                s.erase(j+1, j+1);
                count++;
            }
        }
        cout<<count;
    }

    return 0;
}
