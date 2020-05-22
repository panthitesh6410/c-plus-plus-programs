// User-defined datatypes -

#include<stdio.h>

// structure :
struct address 
{
    char name[49];
    char street[100];
    char city[30];
    int pin;
};

// Union :
// In union change in on evariable reflects on others too.
union test
{
    int x, y;
};

// Enumeration :
enum week{mon, tue, wed, thur, fri, sat, sun};

int main()
{
    printf("STRUCTURE :-");
    // initializing elements of struct address datatype -
    struct address a = {"hitesh", "westland khamaria", "jabalpur", 482005};
    // accessing elements of struct using variable of struct address type -
    printf("\n%s, %s, %s, %d", a.name, a.street, a.city, a.pin);
    a.pin = 482003;
    printf("\n%s, %s, %s, %d", a.name, a.street, a.city, a.pin);
    printf("\nsizeof struct - %d", sizeof(a));

    printf("\n\nUNION :-");
    union test t;       // creating union variable
    t.x = 2;       // t.y also gets value of 2
    printf("\nx=%d y=%d", t.x, t.y);
    t.y = 10;           // t.x also gets value of 10
    printf("\nx=%d y=%d", t.x, t.y); 
    printf("\nsizeof union - %d", sizeof(t));

    printf("\n\nENUMERATION :-");
    enum week day;      // creating variable of enum week
    day = wed;            
    printf("\n%d", day);
    printf("\nsizeof enum - %d", sizeof(day)); 

    return 0;
}