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

Node* floydDetectLoop(Node* &head)
{
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && slow != NULL)
    {
        if(fast == slow)
        {
            cout<<"The cycle is present at "<< slow->data<<endl;
            return slow;
        }
        fast = fast->next;
        if(fast != NULL) fast = fast->next;
        slow = slow->next;
        
    }
    return NULL;
}

Node* startingNode(Node* &head)
{
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL) fast = fast->next;

        slow = slow->next;

        if(fast == slow)
        {
            slow = head;
            break;
        }
    }

    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void removeLoop(Node* &head)
{
    if(head == NULL) return;

    Node* start = startingNode(head);
    Node* temp  = start;
    while(temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node* node1 = new Node(62);
    Node* head = node1;
    Node* tail = node1;
    //print(head);
    insertAtTail(tail,head,20);
    //print(head);
    insertAtTail(tail,head,37);
    //print(head);
    insertAtTail(tail,head,80);
    insertAtTail(tail,head,14);
    insertAtTail(tail,head,14);
    insertAtTail(tail,head,69);
    insertAtTail(tail,head,71);
    insertAtTail(tail,head,56);
    insertAtTail(tail,head,47);
    cout<<"Tail: "<<tail->data<<endl;
    print(head);
    tail->next = head->next;
    if(floydDetectLoop(head) != NULL) cout<<"Cycle is present."<<endl;
    removeLoop(head);
    print(head);
    // if(startNode(head))
    // cout<<"Cycle is not present."<<endl;
    // else cout<<"Cycle is present."<<endl;
}