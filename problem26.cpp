// codeforcese problem :

#include<String>
#include<iostream>
using namespace std;

int find(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();
    for(int i=0;i<=len1-len2;i++)
    {
        int j;
        for(j=0;j<len2;j++)
        {
            if(str2[i+j] != str1[j])
                break;
        }
        if(j == len2)
            return i;
    }

    return -1;
}
int main()
{
    string str;
    cin>>str;
    string sub = "1111111";
    int res = find(str, sub);
    if(res == -1)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}