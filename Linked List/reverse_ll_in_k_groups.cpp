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


// TC - O(n), SC - O(n);
Node* reverse(Node* &head, int k)
{
    if(head == NULL) return NULL;
    int count = 0;
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL && count<k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
        //forward ;
    }
    if(forward != NULL)
    head->next = reverse(curr, k);

    return prev;

}

int main()
{
    Node* tail = NULL;
    Node* head = NULL;
    insertAtHead(tail,head,11);
    insertAtHead(tail,head,9);
    insertAtHead(tail,head,8);
    insertAtHead(tail,head,7);
    insertAtHead(tail,head,3);
    insertAtHead(tail,head,2);
    print(head);
    int k = 4;
    Node* a = reverse(head,k);
    print(a);



}