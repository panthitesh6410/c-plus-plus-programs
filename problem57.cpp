// codeforces - string task :
// remove all vowels , put . just behind each consonant, replace uppercase to lowercase

#include<string>
#include<iostream> 
using namespace std;
int main()
{
    string s;
    cin>>s; 
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            s.erase(i,i);
        else
            s[i] = s[i];
    }
    cout<<s;
    return 0;
}