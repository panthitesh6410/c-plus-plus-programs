// program to find the longest possible palindrome sub-string in a given string.
// abcdaabbaaxetr --> aabbaa

#include<iostream>
using namespace std;

string is_palindrome(string str, int x, int y)
{
    string ori = str;
    int len = str.length();
    for(int i=x;i<y;i++)
    {
        int temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<is_palindrome(str, 0, 5);
    return 0;
}