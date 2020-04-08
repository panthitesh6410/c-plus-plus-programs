// Circular Linked List :

#include<iostream>
using namespace std;

struct circular_linked_list
{
    struct circular_linked_list *next;
    int info;
};
typedef struct circular_linked_list node;

node *start = NULL;

void insert_end(int num)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;
        while(temp->next != start)
            temp = temp->next;
        newnode->next = start;
        temp->next = newnode;
    }
}

void insert_begining(int num)
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start = NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}  

void insert_pos(int num, int pos)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;
        int i=1;
        while(i<pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void delete_end()
{
    node *temp, *prev;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        prev = NULL;
        temp = start;
        while(temp->next != start)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = start;
        free(temp);
    }
}

void delete_begining()
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        start = start->next;
        free(temp);
    }
}

void delete_pos(int pos)
{
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        node *temp, *prev;
        prev = NULL;
        temp = start;
        int i=1;
        while(i<pos)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        free(temp);
    }
}

void search_list(int num)
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        int i=1, flag=0;
        temp = start;
        do
        {
            if(temp->info == num)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
            i++;
        }
        while(temp != start);
        if(flag == 1)
            cout<<num<<" found at position "<<i<<endl;
        else
            cout<<num<<" not found"<<endl;
    }
}

void sort_list()
{
    node *temp, *nextnode;
    for(temp=start;temp->next!=start;temp=temp->next)
    {
        for(nextnode=temp->next;nextnode!=start;nextnode=nextnode->next)
        {
            if(temp->info > nextnode->info)
            {
                int t = temp->info;
                temp->info = nextnode->info;
                nextnode->info = t;
            }
        }
    }
}

void display_list()
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        do
        {
            cout<<temp->info<<"->";
            temp = temp->next;
        }
        while(temp != start);
        cout<<start->info<<endl;
    }
}

int main()
{
    int choice, num, pos;
    // node *start = NULL;
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Insert at end"<<endl;
        cout<<"2. Insert at Begining"<<endl;
        cout<<"3. Insert at given position "<<endl;
        cout<<"4. Delete from end"<<endl;
        cout<<"5. Delete from begining"<<endl;
        cout<<"6. Delete from given position"<<endl;
        cout<<"7. Search in list"<<endl;
        cout<<"8. Sort list"<<endl;
        cout<<"9. Display list"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Choose an Option : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter number : "<<endl;
                cin>>num;
                insert_end(num);
                break;
            case 2:
                cout<<"Enter number : "<<endl;
                cin>>num;
                insert_begining(num);
                break;
            case 3:
                cout<<"Enter number : "<<endl;
                cin>>num;
                cout<<"Enter position : "<<endl;
                cin>>pos;
                insert_pos(num, pos);
                break;
            case 4:
                delete_end();
                break;
            case 5:
                delete_begining();
                break;
            case 6:
                cout<<"Enter position : "<<endl;
                cin>>pos;
                delete_pos(pos);
                break;
            case 7:
                cout<<"Enter number to search :"<<endl;
                cin>>num;
                search_list(num);
                break;
            case 8:
                sort_list();
                break;
            case 9:
                display_list();
                break;
            case 10:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    return 0;
}