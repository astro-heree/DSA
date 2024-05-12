#include <iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* prev;
  Node* next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }

  // destructor
  ~Node()
  {
    int value = this->data;
    if(next != NULL)
    {
        this->next = NULL;
        delete next;
    }
    cout<<"The node with data "<<value<<" is deleted"<<endl;
  }
};

// inserting at head
void insertAtHead(Node* &tail, Node* &head, int data)
{
  if(head == NULL)
  {
    Node* temp = new Node(data);
    head = temp;
    tail = temp;
  }
  else
  {
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
  
}

// inserting at tail
void insertAtTail(Node* &head,Node* &tail , int data)
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
        temp->prev = tail;
        tail = temp;
    }
}

// traversing the linked list
void print(Node* &head)
{
    Node* temp = head;
    while(temp!= NULL)
        {
        cout<<temp-> data<<" ";
        temp = temp->next;
        }
    cout<<endl;
}

// finding the length of the linked list
int getLength(Node* &head)
{
  Node* temp = head;
  int count = 0;

  while(temp!= NULL)
    {
      count++;
      temp = temp->next;
    }
  return count;
}

// inserting at any position
void insertAtPosition(Node* &head, Node* &tail,int position,int data)
{
  if(position==1)
  {
    insertAtHead(tail,head,data);
    return;
  }
  Node* NodeToInsert = new Node(data);
  Node* temp = head;
  int count = 1;
  // inserting at first position
  
  while(count<position - 1)
    {
      temp = temp->next;
      count++;
    }
  // inserting at last position
    if(temp->next == NULL)
    {
      insertAtTail(head,tail,data);
      return;
    }
  // inserting in between
     NodeToInsert->next = temp->next;
     temp->next->prev = NodeToInsert;
     temp->next = NodeToInsert;
     NodeToInsert->prev = temp;
}

void deleteNode(int position,Node* &head,Node* &tail)
{ 
    if(position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
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
            tail = curr->prev;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main() 
{
    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    //print(head);
    //cout<<"The length is: "<<getLength(head)<<endl;

    insertAtHead(tail,head,11);
    print(head);
    //cout<<"The length is: "<<getLength(head)<<endl;
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertAtHead(tail,head,13);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertAtHead(tail,head,8);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    //cout<<"The length is: "<<getLength(head)<<endl;

    insertAtTail(head,tail,25);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertAtPosition(head,tail,2,100);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertAtPosition(head,tail,1,101);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertAtPosition(head,tail,7,102);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    deleteNode(7,head,tail);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
}