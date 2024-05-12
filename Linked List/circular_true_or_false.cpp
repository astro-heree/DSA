#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"The Node with value "<<val<<" is deleted."<<endl;
    }

};

void insertNode(Node* &tail, int element,int d)
{
    // assuming that the element in the linked list
    // Empty list
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        temp->next = temp;
        tail = temp;
    }
    else
    {
        // non empty list
        Node* curr = tail;
        while(curr->data != element)
        {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail)
{
    //int value = tail->data;
    Node* temp = tail;
    // empty linked list    
    if(tail == NULL) cout<<"Linked List is empty";
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

// TC - O(n), SC - O(1)
bool checkCircular(Node* &tail)
{
    if(tail == NULL) return true;
    bool c = false;
    Node* temp = tail->next;
    while(true)
    {
        if(temp->next == NULL)
        {
            break;
        }
        if(temp->next == tail) 
        {
            c = true;
            break;
        }
        temp = temp->next;
    }
    return c;
}

int main()
{
    Node* tail = NULL;
    insertNode(tail,0,3);
    insertNode(tail,3,4);
    insertNode(tail,4,5);
    print(tail);
    bool ans = checkCircular(tail);
    cout<<ans<<endl;
}