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
// Method 1:
// TC- O(n), SC - O(n)
bool isPalindrome(Node *head)
{
    Node* temp = head;
    string s = "";
    while(temp != NULL)
    {
        s += to_string(temp->data);
        temp = temp->next;
    }
    int start = 0;
    int end = s.length()-1;
    while(start<end)
    {
        if(s[start++] != s[end--]) return false;
    }
    return true;
    
}

// Method 2:
// TC - O(n) and SC - O(1);
Node* getMid(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!= NULL  && fast->next!= NULL)
    {
        fast = fast->next->next;
        //if(fast != NULL) fast = fast->next;
        slow = slow->next;
    }
    return slow;
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

bool isPalindrome2(Node* head)
{
    if(head->next == NULL) return true;
        
        // Step 1: Finding the middle of ll.
        Node* middle = getMid(head);
        
        // Step 2: Reversing the ll after the middle node
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        // Step 3: Comparing both halves.
        //Node* head2 = middle->next;
        Node* head1 = head;
        Node* head2 = middle->next;
        while(head2!= NULL)
        {
            if(head1->data != head2->data) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        //Step 4: repeating step 2
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,1);
    print(head);
    
    if(isPalindrome2(head)) cout<<"Linked list is palindrome. "<<endl;
    else cout<<"Linked List is not palindrome. "<<endl;
}