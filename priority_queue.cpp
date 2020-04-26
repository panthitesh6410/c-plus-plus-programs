// Priority Queue :

#include<iostream>
using namespace std;

struct pqueue{
    int info;
    int priority;
    struct pqueue *next;
};
typedef struct pqueue node;
node *head;    // highest priority element
node *start;

void insert(int info, int priority)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->info = info;
    newnode->priority = priority;
    newnode->next = NULL;
}

// incomplete....