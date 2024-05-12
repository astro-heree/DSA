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

void insertAtTail1(Node* &tail,Node* &head,int d)
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
        insertAtTail1(tail,head,d);
        return;
    }

    // creating new node with data d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp -> next;
    temp->next = nodeToInsert;
}

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while(curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node* &ansHead,Node* &ansTail,int data)
{
    Node* temp = new Node(data);
    if(ansHead == NULL) 
    {
        ansTail = temp;
        ansHead = temp;
    }
    else
    {
        //Node* temp = new Node(data);
        ansTail->next = temp;
        ansTail = temp;
    }
    return;
}

Node* add(Node* first,Node* second)
{
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;
    
    while(first != NULL || second != NULL || carry != 0)
    {
        int val1,val2;
        if(first == NULL) val1 = 0;
        else val1 = first->data;
        if(second == NULL) val2 = 0;
        else val2 = second->data;
        
        int sum = val1 + val2 + carry;
        int dig = sum%10;
        //Creating/inserting an answer ll.
        insertAtTail(ansHead,ansTail,dig);
        
        carry = sum/10;
        
        if(first!= nullptr) first = first->next;
        if(second!= NULL) second = second->next;
        
        
    }
        return ansHead;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // Step 1: Reversing both linked list.
    first = reverse(first);
    second = reverse(second);
    
    // Step 2: Adding both ll
    Node* ans = add(first,second);
    
    //Step 3: Reversing the answer ll
    ans = reverse(ans);
    return ans;
}

int main()
{
    Node* l1 = new Node(4);
    Node* head1 = l1;
    Node* tail1 = l1;
    Node* l2 = new Node(3);
    Node* head2 = l2;
    Node* tail2 = l2;

    insertAtTail1(tail1,head1,5);
    insertAtTail1(tail2,head2,4);
    insertAtTail1(tail2,head2,5);

    cout<<"First Linked List: ";
    print(head1);
    cout<<"Second Linked List: ";
    print(head2);

    // head1 = reverse(head1);
    // head2 = reverse(head2);
    Node* ans = addTwoLists(head1,head2);
    cout<<"Added Linked List is: ";
    print(ans);






    return 0;
}