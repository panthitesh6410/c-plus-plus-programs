#include<queue>
#include<iostream>
using namespace std;

struct binary_search_tree{
    struct binary_search_tree *lchild;
    int info;
    struct binary_search_tree *rchild;
};
typedef struct binary_search_tree node;
node *root;

node *insert_node(node *root, int num)
{
    if(root == NULL)
    {
        node *root = new node();
        root->lchild = NULL;
        root->info = num;
        root->rchild = NULL;
        return root;
    }
    else if(num > root->info)
        root->rchild = insert_node(root->rchild, num);
    else
        root->lchild = insert_node(root->lchild, num);
    return root;
}

bool search(node *root, int num)
{
    if(root == NULL)
        return false;
    else if(num == root->info)
        return true;
    else if(num <= root->info)
        return search(root->lchild, num);
    else
        return search(root->rchild, num);
}

int find_min(node *root)
{
    if(root == NULL)
        return -1;
    // vist left as possible:
    node *temp = root;
    while(temp->lchild != NULL)
        temp = temp->lchild;
    return temp->info; 
}

int find_max(node *root)
{
    if(root == NULL)
        return -1;
    // vist left as possible:
    node *temp = root;
    while(temp->rchild != NULL)
        temp = temp->rchild;
    return temp->info; 
}

int max_height(node *root)
{
    if(root == NULL)
        return -1;
    int lheight = max_height(root->lchild);
    int rheight = max_height(root->rchild);
    if(lheight > rheight)
        return lheight+1;
    else
        return rheight+1; 
}

void breadth_first_search(node *root)
{
    if(root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        cout<<temp->info<<" ";
        if(temp->lchild != NULL)
            q.push(temp->lchild);
        if(temp->rchild != NULL)
            q.push(temp->rchild);
        q.pop();
    }
}

void preorder_traversal(node *root)
{
    if(root != NULL)
    {
        cout<<root->info<<" ";
        preorder_traversal(root->lchild);
        preorder_traversal(root->rchild);
    }
}

void postorder_traversal(node *root)
{
    if(root != NULL)
    {
        postorder_traversal(root->lchild);
        postorder_traversal(root->rchild);
        cout<<root->info<<" ";
    }
}

void inorder_traversal(node *root)
{
    if(root != NULL)
    {
        inorder_traversal(root->lchild);
        cout<<root->info<<" ";
        inorder_traversal(root->rchild);
    }
}

// bool is_binary_tree(node *root)
// {
//     if(root == NULL)
//         return true;
//     if(is_subtree_lesser(root->lchild, root->info) && is_subtree_greater(root->rchild, root->info) && is_binary_tree(root->lchild) && is_binary_tree(root->rchild))
//         return true;
//     else
//         return false;
// }

// bool is_subtree_lesser(node *root, int value)
// {
//     if(root == NULL)
//         return true;
//     if(root->info < value && is_subtree_lesser(root->lchild, value) && is_subtree_lesser(root->rchild, value))
//         return true;
//     else
//         return false;
// }

// bool is_subtree_greater(node *root, int value)
// {
//     if(root == NULL)
//         return true;
//     if(root->info > value && is_subtree_greater(root->lchild, value) && is_subtree_greater(root->rchild, value))
//         return true;
//     else
//         return false;
// }

node *FindMinInRightSubtree(node *root)
{
    node *temp = root;
    while(temp->lchild != NULL)
        temp = temp->lchild;
    return temp; 
}

node *delete_node(node *root, int data)
{
    if(root == NULL)
        return root;
    else if(data > root->info)
        root->rchild = delete_node(root->rchild, data);
    else if(data < root->info)
        root->lchild = delete_node(root->lchild, data);
    else{
        // data found at root
        if(root->lchild == NULL && root->rchild == NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->lchild == NULL)
        {
            node *temp = root;
            root = root->lchild;
            delete temp;
        }
        else if(root->rchild == NULL)
        {
            node *temp = root;
            root = root->rchild;
            delete temp;
        }
        else{
            node *temp = FindMinInRightSubtree(root->rchild);
            root->info = temp->info;
            root->rchild = delete_node(root->rchild, temp->info);
        }   
    }
    return root;
}

int main()
{
    root = NULL;
    unsigned int choice, num;
    while(true)
    {
        cout<<"\nMENU - "<<endl;
        cout<<"1. Insert a node"<<endl;
        cout<<"2. Delete a node"<<endl;
        cout<<"3. Breadth First Search/Level order Traversal"<<endl;
        // cout<<"4. Check tree is Binary search tree or not"<<endl;
        cout<<"5. Depth First Search-Inorder Traversal"<<endl;
        cout<<"6. Depth First Search-PreOrder Traversal"<<endl;
        cout<<"7. Depth First Search-PostOrder Traversal"<<endl;
        cout<<"8. Find Min-Max values"<<endl;
        cout<<"9. Find max Height of Tree"<<endl;
        cout<<"10. Search a value"<<endl;
        cout<<"11. exit"<<endl;
        cout<<"Enter you Choice - "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter number to insert - ";
                cin>>num;
                root = insert_node(root, num);
                break;
            case 2:
                cout<<"Enter value to delete - ";
                cin>>num;
                root = delete_node(root, num);
                break;
            case 3:
                breadth_first_search(root);
                break;
            // case 4:
            //     if(is_binary_tree(root))
            //         cout<<"It is a binary search tree";
            //     else
            //         cout<<"It is not a binary search tree";
            //     break;
            case 5:
                inorder_traversal(root);
                break;
            case 6:
                preorder_traversal(root);
                break;
            case 7:
                postorder_traversal(root);
                break;
            case 8:
                if(find_min(root) == -1 || find_max(root) == -1)
                    cout<<"Empty Tree";
                else{
                    cout<<"Minimum value - "<<find_min(root)<<endl;
                    cout<<"Maximum value - "<<find_max(root);
                }
                break;
            case 9:
                if(max_height(root) == -1)
                    cout<<"Empty Tree";
                else
                    cout<<"Max Height = "<<max_height(root);
                break;
            case 10:
                cout<<"Enter number to search - ";
                cin>>num;
                if(search(root, num))
                    cout<<num<<" found";
                else
                    cout<<num<<" not found";
                break;
            case 11:
                exit(0);
            default:
                cout<<"Invalid Input";
                break;
        }
    }   
    return 0;
}