/* codeforces problem :
    If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". 
    If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
*/

#include<iostream>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int count1=0, count2=0, d;
    char ch;
    for(int i=0;i<str1.size();i++)
    {
        ch = str1[i];
        d = int(ch);
        if(d>=65 && d<=92)
            d = d + 32;
        count1 += d;
    }
    for(int i=0;i<str2.size();i++)
    {
        ch = str2[i];
        d = int(ch);
        if(d>=65 && d<=92)
            d = d + 32;
        count2 += d;
    }
    if(count1<count2)
        cout<<"-1";
    else if(count1>count2)
        cout<<"1";
    else
        cout<<"0";

    return 0;
}