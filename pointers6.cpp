// Character Arrays and Pointers - 

#include<iostream>
#include<string.h>
using namespace std;

void print(char *c)
{
    while(*c != '\0')
    {
        cout<<*c;
        c++;
    }
}

int main()
{
    // size of character array >= no. of characters in string + 1
    // since, an extra space is filled with 'string-terminator'

    // char c[5];
    //OR
    char c[10] = "Hitesh";
    cout<<c<<endl;
    cout<<"total size of character array "<<sizeof(c)<<endl;
    cout<<"No. of Characters "<<strlen(c)<<endl;
    
    char *p;
    p = c;
    cout<<*p<<endl;
// *******************************************
// character array in function args :

    char c1[20] = "Hello";
    // char *c1 = "Hello";    (ALTER)
    print(c1);

    

    return 0;
}