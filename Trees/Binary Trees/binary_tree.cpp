#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter data "<<endl;
    int d;
    cin>>d;
    root = new node(d);

    if(d == -1) return NULL;  

    cout<<"Enter data for left of "<<d<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for right of "<<d<<endl;
    root->right = buildTree(root->right);
    return root;
}

//Breadth first search
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        
    }
    
}
// LNR where l is left node, n is node to print and r is the right node.
void inOrderTraversal(node* root)
{
    // base case
    if(root == nullptr) return;

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

// NLR
void preOrderTraversal(node* root)
{
    if(root == nullptr) return;

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// LRN
void postOrderTraversal(node* root)
{
    if(root == nullptr) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

//we always use queue for level order traversal
void buildFromLevelOrderTraversal(node* &root)
{
    queue<node*> q;
    cout<<"Enter the data for root"<<endl;
    int d;
    cin>>d;
    root = new node(d);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data for left of "<<temp->data<<endl;
        cin>>d;
        if(d != -1)
        {
            temp->left = new node(d);
            q.push(temp->left);
        }
        cout<<"Enter the data for right of "<<temp->data<<endl;
        cin>>d;
        if(d != -1)
        {
            temp->right = new node(d);
            q.push(temp->right);
        }
    }
}

// reverse level order traversal
 

int main()
{
    node* root = NULL;
    buildFromLevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // creating a tree;
    /*
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order traversal    
    cout<<"Printing the tree:"<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder traversal: ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"PreOrder traversal: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder traversal: ";
    postOrderTraversal(root);
    cout<<endl;
    */
    levelOrderTraversal(root);
    return 0;
}