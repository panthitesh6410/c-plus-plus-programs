// HackerRank - Designer PDF Viewer
//input - abc
// output - 9 (height=3 * width=3 = 9)

#include<map>
#include<iostream>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    map<char, int> letters;         // ['a':1, 'b':3, 'c':1, .......]
    
    letters.insert(pair<char, int>('a', 0));
    letters.insert(pair<char, int>('b', 0));
    letters.insert(pair<char, int>('c', 0));
    letters.insert(pair<char, int>('d', 0));
    letters.insert(pair<char, int>('e', 0));
    letters.insert(pair<char, int>('f', 0));
    letters.insert(pair<char, int>('g', 0));
    letters.insert(pair<char, int>('h', 0));
    letters.insert(pair<char, int>('i', 0));
    letters.insert(pair<char, int>('j', 0));
    letters.insert(pair<char, int>('k', 0));
    letters.insert(pair<char, int>('l', 0));
    letters.insert(pair<char, int>('m', 0));
    letters.insert(pair<char, int>('n', 0));
    letters.insert(pair<char, int>('o', 0));
    letters.insert(pair<char, int>('p', 0));
    letters.insert(pair<char, int>('q', 0));
    letters.insert(pair<char, int>('r', 0));
    letters.insert(pair<char, int>('s', 0));
    letters.insert(pair<char, int>('t', 0));
    letters.insert(pair<char, int>('u', 0));
    letters.insert(pair<char, int>('v', 0));
    letters.insert(pair<char, int>('w', 0));
    letters.insert(pair<char, int>('x', 0));
    letters.insert(pair<char, int>('y', 0));
    letters.insert(pair<char, int>('z', 0));
    
    map<char, int>::iterator itr;
    int i;

    for(itr=letters.begin();itr!=letters.end();++itr)
    {
        cin>>itr->second;
    }
    // for (itr = letters.begin(); itr != letters.end(); ++itr) { 
    //     cout << '\t' << itr->first 
    //          << '\t' << itr->second << '\n'; 
    // } 

    string s;
    cin>>s;

    int arr[s.length()];
    
    for(itr = letters.begin(), i=0;itr!=letters.end(), i<26;itr++, i++)
    {
        if(s[i] == itr->first)
        {
            s[i] = itr->second;
        }
    }

    int max = arr[0];

    for(int i=0;i<s.length();i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    cout<<s.length() * max;

    return 0;
}