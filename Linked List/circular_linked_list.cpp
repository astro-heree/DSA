#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int val = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"The node with value "<<val<<" is deleted."<<endl;
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

void deleteNode(Node* &tail , int value)
{
    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    // for single node linked list
    if(curr == prev)
    {
        tail = NULL;
    }
    prev->next = curr->next;
    // for more than one node linked list
    if(tail == curr)
    {
        tail = curr->next;
    }
    curr->next = NULL;
    delete curr;
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

int main()
{
    // Node* node1 = new Node(10);
    // Node* node2 = new Node(12);
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    /*
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    */

    // deleteNode(tail,5);
    // print(tail);



    return 0;
}