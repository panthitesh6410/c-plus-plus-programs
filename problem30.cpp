// program to find the longest possible palindrome sub-string in a given string.

#include<iostream>
using namespace std;

bool is_palindrome(string str)
{
    int mid = str.length()/2;
    string ori = str;
    for(int i=0;i<mid;i++)
    {
        int temp = str[i];
        str[i] = str[mid-1-i];
        str[mid-1-i] = temp;
    }
    if(ori == str)
        return true;
    else
        return false;
}

int main()
{
    string str;
    cin>>str;
    cout<<is_palindrome(str);

    return 0;
}


