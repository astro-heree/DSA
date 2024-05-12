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
// sort ll containing 0,1,2 using data replacement.
void sortll(Node* &head)
{
    int c0 = 0 , c1 = 0 , c2 = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0) c0++;
        else if(temp->data == 1) c1++;
        else c2++;
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(c0!=0)
        {
            temp->data = 0;
            temp = temp->next;
            c0--;
        }
        else if(c1!=0)
        {
            temp->data = 1;
            temp = temp->next;
            c1--;
        }
        else
        {
            temp->data = 2;
            temp = temp->next;
            c2--;
        }
    }
    return;
}

// for coding ninjas
void insertAtTail2(Node* &tail, Node* &temp)
{
    //Node* temp = head;
    //Node *nodeToInsert = new Node(data);
    tail->next = temp;
    tail = temp;
    return;
}


// sorting without data replacement
Node* sortNewLL(Node* &head)
{
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;
    Node* twoTail = twoHead;
    Node* temp = head;
    while(temp != NULL)
    {
        //int value = temp->data;
        if(temp->data == 0)
        {
            insertAtTail2(zeroTail,temp);
            // temp = temp->next;
        } 
        else if(temp->data == 1) 
        {
            insertAtTail2(oneTail,temp);
           // temp = temp->next;
        }
        else
        {
            insertAtTail2(twoTail,temp);
            //temp = temp->next;
        } 
        temp = temp->next;
    }
    if(oneHead->next!= NULL) 
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,1);
    insertAtHead(head,tail,2);
    insertAtHead(head,tail,0);
    insertAtHead(head,tail,1);
    print(head);

    //sortll(head);
    Node* newHead = sortNewLL(head);
    print(newHead);
}