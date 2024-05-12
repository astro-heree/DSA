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

// TC - O(n)+ o(n/2) = O(n);
// SC - O(1);
Node* middle(Node* &head)
{
    Node* temp = head;
    int count = 0;
    while(head != NULL)
    {
        count++;
        head= head->next;
    }
    count = count/2;
    while(count--)
    {
        temp = temp->next;
    }
    return temp;
}

// optimised solution
// slow and fast pointers
// TC - O(n/2) = O(n);
// SC - O(1); 
Node* middlepp(Node* &head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL) return head;
    if(head->next->next == NULL) return head->next;
    Node* slow = head;
    Node* fast = head->next;

    while(fast!= NULL)
    {
        fast = fast->next;
        if(fast!= NULL) fast = fast->next;
        slow = slow->next;
    }
    return slow;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    //insertAtHead(tail,head,6);
    insertAtHead(tail,head,5);
    insertAtHead(tail,head,4);
    insertAtHead(tail,head,3);
    insertAtHead(tail,head,2);
    insertAtHead(tail,head,1);
    print(head);

    //Node* requiredNode = middle(head);
    //cout<<requiredNode->data<<endl;

    Node* requiredNode = middlepp(head);
    cout<<requiredNode->data<<endl;
}
