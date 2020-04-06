// Singly Linked List :

#include<iostream>
using namespace std;

struct singly_linked_list
{
    int info;
    struct singly_linked_list *next;
};
typedef struct singly_linked_list node;

node *insert_end(node *start, int num)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
        start = newnode;
    else
    {
        temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    return start;
}

node *insert_begining(node *start, int num)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
        start=newnode;
    else
    {
        newnode->next = start;
        start = newnode;
    }
    return start;
}

node *insert_pos(node *start, int num, int pos)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(start == NULL)
        start = newnode;
    else
    {
        temp = start;
        int i = 1;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return start;
}

void search_list(node *start, int num)
{
    node *temp = start;
    int i=1, flag=0;
    while(temp != NULL)
    {
        if(temp->info == num)
        {
            flag = 1;
            break;
        }
        i++;
        temp = temp->next;
    }
    if(flag == 1)
        cout<<num<<" found at position "<<i<<endl;
    else
        cout<<num<<" not found "<<endl;
}

void sort_list(node *start)      // selection sort
{
    node *temp, *nextnode;
    int t;
    for(temp=start;temp->next!=NULL;temp=temp->next)
    {
        for(nextnode=temp->next;nextnode!=NULL;nextnode=nextnode->next)
        {
            if(temp->info > nextnode->info)
            {
                t = temp->info;
                temp->info = nextnode->info;
                nextnode->info = t;
            }
        }
    }
}

void delete_end(node *start)
{
    node *temp, *prev;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        prev = NULL;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);   
    }
}

void delete_begining(node *start)
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

void delete_pos(node *start, int pos)
{
    node *temp, *prev;
    int i=1;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        prev = NULL;
        while(i < pos)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        free(temp);
    }
}

node *reverse_list(node *start)
{
    node *temp, *prev, *nextnode;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        prev = NULL;
        temp = start;
        while(temp != NULL)
        {
            nextnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextnode;
        }
        start = prev;
    }
    return start;
}

void display_list(node *start)
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        while(temp != NULL)
        {
            cout<<temp->info<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main()
{
    int choice, num, pos;
    node *start = NULL;
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. insert node from end"<<endl;
        cout<<"2. insert node from begining"<<endl;
        cout<<"3. insert node at given position"<<endl;
        cout<<"4. delete node from end"<<endl;
        cout<<"5. delete node from begining"<<endl;
        cout<<"6. delete node from given position"<<endl;
        cout<<"7. sort linked list "<<endl;
        cout<<"8. search an element in linked list"<<endl;
        cout<<"9. reverse the linked list"<<endl;
        cout<<"10. display linked list"<<endl;
        cout<<"11. EXIT"<<endl;
        cout<<"Choose an Option : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter number :"<<endl;
                cin>>num;
                start=insert_end(start, num);
                break;
            case 2:
                cout<<"Enter number :"<<endl;
                cin>>num;
                start=insert_begining(start, num);
                break;
            case 3:
                cout<<"Enter number :"<<endl;
                cin>>num;
                cout<<"Enter position : "<<endl;
                cin>>pos;
                start=insert_pos(start, num, pos);
                break;
            case 4:
                delete_end(start);
                break;
            case 5:
                delete_begining(start);
                break;
            case 6:
                cout<<"Enter position to delete : "<<endl;
                cin>>pos;
                delete_pos(start, pos);
                break;
            case 7:
                sort_list(start); 
                break;
            case 8:
                cout<<"Enter number to search :"<<endl;
                cin>>num;
                search_list(start, num);
                break;
            case 9:
                start = reverse_list(start);
                break;
            case 10:
                display_list(start);
                break;
            case 11:
                exit(0);
            default :
                cout<<"Invalid input"<<endl;
                break;
        }
    }

    return 0;
}
