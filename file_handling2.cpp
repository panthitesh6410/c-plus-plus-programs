// file handling - reading file :

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("myFile.dat");
    ch = fin.get();             // or cin>>ch
    while(!fin.eof())           // until the file ends
    {
        cout<<ch;
        ch = fin.get();
    }
    fin.close();

    return 0;
}