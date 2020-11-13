// print all possible permutations of a string

#include<iostream>
using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permutations(string s, int i, int n)
{
    if(i == n)
        cout<<s<<endl;
    else
    {
        for(int j=i;j<s.length();j++)
        {
            swap(&s[i], &s[j]);
            permutations(s, i+1, n);
            swap(&s[i], &s[j]);
        }
    }
    
}
int main()
{
    string s;
    cin>>s;
    permutations(s, 0, s.length()-1);
    return 0;
}