#include<iostream>
using namespace std;

struct binary_search_tree
{
    struct binary_search_tree *lchild;
    int info;
    struct binary_search_tree *rchild;
};
typedef struct binary_search_tree node;

node *create_node(node *root,int num)
{
    if(root==NULL)
    {
        root=(node*)malloc(sizeof(node));
        root->lchild=NULL;
        root->rchild=NULL;
        root->info=num;
        return root;
    }
    if(num>root->info)
        root->rchild=create_node(root->rchild,num);
    else
        root->lchild=create_node(root->lchild,num);
    
    return 0;
}
void inorder_traversal(node *root)
{
    if(root!=NULL)
    {
        inorder_traversal(root->lchild);
        cout<<root->info<<"\t";
        inorder_traversal(root->rchild);
    }
}
void preorder_traversal(node *root)
{
    if(root!=NULL)
    {
        cout<<root->info<<"\t";
        preorder_traversal(root->lchild);
        preorder_traversal(root->rchild);
    }
}
void postorder_traversal(node *root)
{   
     if(root!=NULL)
    {    
        postorder_traversal(root->lchild);
        postorder_traversal(root->rchild);
        cout<<root->info<<"\t";
    }
}
int main()
{
    int num,choice;
    node *root=NULL;
    
    while(true)
    {
        cout<<"**************** MENU *************"<<endl;
        cout<<"1.insertion"<<endl;
        cout<<"2.inorder traversal"<<endl;
        cout<<"3.preorder traversal"<<endl;
        cout<<"4.postorder traversal"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter number to insert : ";
                cin>>num;
                root=create_node(root,num);
                break;
            case 2:
                cout<<"Inorder Traversal :"<<endl;
                inorder_traversal(root);
                break;
            case 3:
                cout<<"Preorder Traversal :"<<endl;
                preorder_traversal(root);
                break;
            case 4:
                cout<<"Postorder Traversal :"<<endl;
                postorder_traversal(root);
                break;
            case 5:
                exit(0);
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }
    return 0;
}