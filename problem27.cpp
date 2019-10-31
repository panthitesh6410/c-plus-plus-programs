// program to accept string end with 101 :

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string cmp = "101";
    int n = str.length();
    int i,j;
    int count = 0;

    for(i=n-3, j=0;i<=n-1, j<3;i++, j++)
    {
        if(str[i]==cmp[j])
            count++;
    }
    if(count == 3)
        cout<<"string is accepted";
    else 
        cout<<"string is rejected";

    return 0;
}