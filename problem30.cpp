// program to find the longest possible palindrome sub-string in a given string.
// abcdaabbaaxetr --> aabbaa

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int max_length = 0;
    string max_palindrome_str;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(reverse(str, i, j) ==  str[from i to j] && length(str[from i to j]) >= max_length)
                max_palindrome_str = str[from i to j];
        }
    }
    cout<<max_palindrome_str;
    return 0;
}

bool reverse(string str, int i, int j)
{       
    string s = '\0';
    while(i <= j)
    {
        s = s + str[i];
        i++;
    }
    char temp;
    string ori = s;
    for(int k=0;k<s.length()/2;k++)
    {
        temp = s[k];
        s[k] = s[s.length() - 1 - k];
        s[s.length() - 1 - k] = temp;
    }
    if(ori == s)
        return true;
    else
        return false;
}