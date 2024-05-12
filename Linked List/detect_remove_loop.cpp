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
//SC - O(n) and TC - O(n);
bool detectLoop(Node* &head)
{
    if(head == NULL) return false;

    Node* temp = head;
    map<Node*,bool> visited;

    while(temp != NULL)
    {
        // cycle is present
        if(visited[temp] == true)
        {
            cout<<"Loop is starting from "<<temp->data<<endl;
            return 1;
            //break;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    //print(head);
    insertAtTail(tail,head,12);
    //print(head);
    insertAtTail(tail,head,15);
    //print(head);
    insertAtTail(tail,head,16);
    print(head);
    tail->next = head->next;
    //print(head);
    if(detectLoop(head)) cout<<"Loop is present. "<<endl;
    else cout<<"Loop is absent."<<endl;
}