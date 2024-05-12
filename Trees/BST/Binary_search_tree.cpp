#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left; 
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void inOrderTraversal(Node* root)
{
    // base case
    if(root == nullptr) return;

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

// NLR
void preOrderTraversal(Node* root)
{
    if(root == nullptr) return;

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// LRN
void postOrderTraversal(Node* root)
{
    if(root == nullptr) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

Node* insertIntoBST(Node* &root, int a)
{
    if(root == NULL) 
    {
        root = new Node(a);
        return root;
    }

    if(a> root->data)
    {
        root->right = insertIntoBST(root->right, a);
    }
    else
    {
        root->left = insertIntoBST(root->left,a);
    }
    return root;
}

// insertion complexity in bst in O(log n)
void takeInput(Node* &root)
{
    int a;
    cin>>a;

    while(a!= -1)
    {
        root = insertIntoBST(root,a);
        cin>>a;
    }
}

void print(Node* root)
{
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* frontNode = q.front();
        q.pop();
        
        if(frontNode == NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else
        {
            cout<<frontNode->data<<" ";
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }  
    }
    return;
}

Node* minimum(Node* root)
{
    Node* temp = root;
    while(temp->left!= NULL)
    {
        temp = temp->left;
    }
    return temp;

}

Node* maximum(Node* root)
{
    Node* temp = root;
    while(temp->right!= NULL)
    {
        temp = temp->right;
    }
    return temp;

}

Node* inOrderPredecessor(Node* root, int t)
{
    Node* temp = root;
    Node* prev = NULL;
    while(temp->data != t)
    {
        if(temp->data > t)
        {
            prev = temp;
            temp = temp->left;
        }
        else
        {
            prev = temp;
            temp = temp->right;
        }
    }
    return prev;
}

Node* inOrderSuccessor(Node* root, int t)
{
    Node* prev = NULL;
    Node* temp = root;
    while(temp->data != t)
    {
        prev = temp;
        if(temp->data > t) temp = temp->left;
        else temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int d)
{
    if(root == NULL) return root;
    if(root->data == d)
    {
        //0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        } 

        //1 child
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        } 
        if(root->right == NULL && root->left != NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minimum(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data > d)
    {
        root->left = deleteFromBST(root->left, d);
        return root;
    } 
    else
    {
        root->right = deleteFromBST(root->right,d);
        return root;    
    } 

}

int main()
{
    //50 20 70 10 30 90 110 -1
    Node* root = NULL;
    cout<<"Enter data for BST creation: ";
    takeInput(root);
    // cout<<endl;
    print(root);

    cout<<"Inorder: ";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Preorder: ";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Postorder: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Minimum: "<<minimum(root)->data<<endl;
    cout<<"Maximum: "<<maximum(root)->data<<endl;
    int target = 50;

    deleteFromBST(root,50);
    inOrderTraversal(root);

    // cout<<"Inorder predecessor: "<<inOrderPredecessor(root,target)->data<<endl;
    // cout<<"Inorder successor: "<<inOrderSuccessor(root,target)->data;
}