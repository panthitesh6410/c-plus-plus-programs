// Doubly Linked List :

#include<iostream>
using namespace std;

struct DoublyLinkedList
{
    struct DoublyLinkedList *left;
    int info;
    struct DoublyLinkedList *right;
};
typedef struct DoublyLinkedList node;

node *start, *last;

void insert_end(int num)
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->left = NULL;
    newnode->info = num;
    newnode->right = NULL;
    if(start == NULL)
        start = last = newnode;
    else
    {
        last->right = newnode;
        newnode->left = last;
        last = newnode;
    }
}

void insert_begining(int num)
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->info = num;
    if(start == NULL)
        start = last = newnode;
    else
    {
        newnode->right = start;
        start->left = newnode;
        start = newnode;
    }
}

void insert_pos(int num, int pos)
{
    node *newnode, *temp;
    newnode = (node*)malloc(sizeof(node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->info = num;
    int i=1;
    if(start == NULL)
        start = last = newnode;
    else
    {
        temp = start;
        while(i<pos-1)
        {
            temp = temp->right;
            i++;
        }
        temp->right->left = newnode;
        newnode->right = temp->right;
        newnode->left = temp;
        temp->right = newnode;
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
        start->right->left = NULL;
        start = start->right;
        free(temp);
    }
}

void delete_end()
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = last;
        last->left->right = NULL;
        last = last->left;
        free(temp); 
    }
}

void delete_pos(int pos)
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        int i=1;
        temp = start;
        while(i<pos)
        {
            i++;
            temp = temp->right;
        }
        temp->left->right = temp->right;
        temp->right->left = temp->left;
        free(temp);
    }
}

void display_front()
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = start;
        while(temp != NULL)
        {
            cout<<temp->info<<"<->";
            temp = temp->right;
        }
        cout<<"NULL"<<endl;
    }
}

void sort_list()
{
    node *temp, *next;
    if(start == NULL)
        cout<<"Empty List"<<endl;
    else
    {
        for(temp=start;temp->right!=NULL;temp=temp->right)
        {
            for(next=temp->right;next!=NULL;next=next->right)
            {
                if(temp->info > next->info)
                {
                    int t = temp->info;
                    temp->info = next->info;
                    next->info = t;
                }
            }
        }
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
        while(temp != NULL)
        {
            if(temp->info == num)
            {
                flag=1;
                break;
            }
            i++;
            temp = temp->right;
        }
        if(flag == 0)
            cout<<num<<" not found"<<endl;
        else
            cout<<num<<" found at position "<<i<<endl;
    }
}

void display_back()
{
    node *temp;
    if(start == NULL)
        cout<<"Empty Linked List"<<endl;
    else
    {
        temp = last;
        while(temp != NULL)
        {
            cout<<temp->info<<"<->";
            temp = temp->left;
        }
        cout<<"NULL"<<endl;
    }
}

int main()
{
    int num, choice, pos;
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
        cout<<"9. display linked list from front"<<endl;
        cout<<"10. display linked list from end"<<endl;
        cout<<"11. EXIT"<<endl;
        int choice;
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
                sort_list();
                break;
            case 8:
                cout<<"Enter number to search : "<<endl;
                cin>>num;
                search_list(num);
                break;
            case 9:
                display_front();
                break;
            case 10:
                display_back();
                break;
            case 11:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    return 0;
}