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

void insertAtHead(Node* &tail, Node* &head , int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* & tail, int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(tail,head,data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position)
    {
        temp = temp->next;
        count++;
    }
    // checking if it is last node
    if(temp->next == NULL)
    {
        insertAtTail(head,tail,data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

void deleteByValue(Node* &head, Node* &tail, int value)
{
    if(head->data == value)
    {
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        if(curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// iterative way to reverse linked list.
// TC - O(n), SC - O(1).
void reverse(Node* &head, Node* &tail)
{
   if(head == NULL || head->next == NULL) return;
   else{
    Node* p = head;
    Node* curr = head;
    Node* forward = NULL;
    Node* prev = NULL;
    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    tail = p;
   }
}

// recursive way to reverse linked list
// TC - O(n) , SC - O(n); 
void recurreverse(Node* &head, Node* &curr, Node* &prev, Node* &tail)
{
    Node* b = head;
    if(curr == NULL)
    {
        head = prev;
        tail = b;
        return;
    }
    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    recurreverse(head, curr, prev, tail);
}

// recursive method 2
// it returns the head of the reversed linked list
// TC - O(n) , SC - O(n);
Node* recurreverse2(Node* &head)
{
    if(head == NULL || head->next == NULL)
    return head;
    Node* chotaHead = recurreverse2(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;
    
}

void deleteNode(Node* &head, Node* &tail, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;

    while(count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(curr->next == NULL)
    {
        tail = prev;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(tail,head,9);
    insertAtHead(tail,head,7);
    insertAtHead(tail,head,5);
    insertAtHead(tail,head,3);
    print(head);
    // cout<<"Head is: "<<head->data<<endl;
    // cout<<"Tail is: "<<tail->data<<endl;
    //Node* curr = head;
    //Node* prev = NULL;
    // recurreverse(head,curr,prev,tail);
    // print(head);
    // cout<<"Head is: "<<head->data<<endl;
    // cout<<"Tail is: "<<tail->data<<endl;

    Node* a = recurreverse2(head);
    print(a);
    // cout<<"Head is: "<<head->data<<endl;
    // cout<<"Tail is: "<<tail->data<<endl;
    
}