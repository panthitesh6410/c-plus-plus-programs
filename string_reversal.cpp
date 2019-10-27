// string reversal 

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    for(int i=0;i<len/2;i++)
    {
        int temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    cout<<str; 
    return 0;
}
