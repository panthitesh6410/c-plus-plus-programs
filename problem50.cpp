// input : aBc      output : ABbCcc
// input : plus     output : PLlUuuSsss

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s, result;
    cin>>s;
    for(int i=1;i<=s.length();i++)
    { 
        char tempu = toupper(s[i]);
        char temps = tolower(s[i]);
        result += tempu;
        for(int j=1;i<=i;j++)
            result += temps;
    }
    cout<<result;
    return 0;
}