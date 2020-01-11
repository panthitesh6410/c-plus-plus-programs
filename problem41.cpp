// HackerRank Problem - CamelCase :
// Input : saveChangesInTheEditor
// Output : 5 (words in string)

#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count = 1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            count++;
    }
    cout<<count;
    return 0;
}