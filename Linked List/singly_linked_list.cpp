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

void deleteByValue(int value , Node* &head, Node* &tail)
{
     Node* temp = head;
    if(temp->data == value)
    {
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        if(prev->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}

int deleteNodeByValueUsingFunction(int value , Node* &head)
{
    Node* curr = head;
    int pos = 1;

    while(curr->next != NULL)
    {
        if(curr->data == value)
        break;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return pos;
}

void deleteNode(int position , Node* &head,Node* &tail)
{
    // deleting first or start node
    if(position == 1)
    {
        Node* temp = head;
        head = head ->next;
        // memory free start node
        temp ->next = NULL;
        delete temp;
    }
    else
    {
        // deleting middle or last node
        Node* curr = head;
        Node* prev = NULL; 
        int count = 1;

        while(count<position)
        {
            prev = curr;
            curr = curr-> next;
            count++;
        }
        
        prev -> next = curr-> next;
        if(curr->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool checkCircular(Node* &tail)
{
    if(tail == NULL) return true;
    bool c = false;
    Node* temp = tail;
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
// floyd cycle detection algorithm returns the node which is a part of the cycle. 
// It is not necessary that it will be the starting node of the cycle.
// TC - O(n), SC - O(1).
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
            cout<<"Present on "<<temp->data<<endl;
            return 1;
            break;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    // creating a new node  
    Node* node1 = new Node(10);
    //cout<<node1-> data<<endl;
    //cout<<node1->next<<endl;

    // head pointed to new node 
    Node* head = node1;
    Node* tail = node1;
    //print(head);
    insertAtTail(tail,head,12);
    //print(head);
    insertAtTail(tail,head,15);
    //print(head);
    insertAtTail(tail,head,16);
    print(head);

    // insertAtPosition(tail,head,3,22);
    // print(head);

    // cout<<"HEAD: "<<head->data<<endl;
    // cout<<"TAIL: "<<tail->data<<endl;

    // deleteNode(4,head,tail);
    // print(head);
    // cout<<"HEAD: "<<head->data<<endl;
    // cout<<"TAIL: "<<tail->data<<endl;

    //int pos = deleteNodeByValue(12,head,tail);
    ///deleteNode(pos,head,tail);
    //print(head);
    // cout<<"HEAD: "<<head->data<<endl;
    // cout<<"TAIL: "<<tail->data<<endl;
    
    // deleting using position
    // int pos = deleteNodeByValueUsingFunction(12,head,tail);
    // cout<<"The node to be deleted is at position: "<<pos<<endl;
    // deleteNode(pos,head,tail);
    // print(head);

    // deleteNode(3,head,tail);
    // print(head);
    // cout<<"HEAD: "<<head->data<<endl;
    // cout<<"TAIL: "<<tail->data<<endl;



    return 0;
}