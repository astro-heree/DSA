#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this -> data;
        // memory free 
        if(this->next != NULL)
        {
            delete next;
            this ->next = NULL;
        }
        cout<<"The Node with value "<<value<<" is deleted"<<endl;
    }

};

void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp ->next = head;
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d)
{
    // creating new node
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail,Node* &head, int position , int d)
{
    // inserting at first position
    if(position == 1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    
    while(count < position - 1)
    {
        temp = temp-> next;
        count++;
    }

    // inserting at last position
    if(temp->next == NULL)
    {
        insertAtTail(tail,head,d);
        return;
    }

    // creating new node with data d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp -> next;
    temp->next = nodeToInsert;
    
}