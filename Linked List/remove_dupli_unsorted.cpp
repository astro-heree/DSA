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
// TC - O(n^2) SC - O(1)
void removeDuplicate(Node* head)
{
    if(!head) return;
    Node* temp = head;
    while(temp!= NULL )
    {
        Node* curr = temp->next;
        Node* prev = temp;
        while(curr != NULL )
        {
            // if(!curr) break;
            // else cout << curr->data << " ";
            if(temp->data == curr->data)
            {
                // Delete karna hai
                prev->next = curr->next;
                Node* NodeToDel = curr;
                curr = curr->next;
                NodeToDel->next = nullptr;
                delete(NodeToDel);
            }
            else{
                curr = curr->next;
                prev = prev->next;
            }
            

            // cout << "Internal while loop compleleted" << endl;
        }
        temp = temp->next;
        // cout << "External While loop completed" << endl;
    }
}


// TC - O(n), SC - O(n)
void removeDuplicates2(Node* &head)
{
    unordered_map<Node*,bool> visited;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)
    {
        if(visited[temp] == false)
        {
            visited[temp] = true;
            prev = temp;
            temp = temp->next;
        }
        else
        {
            //Node* store = temp->next;
            Node* nodeToDel = temp;
            temp = temp->next;
            nodeToDel->next = NULL;
            delete (nodeToDel);
            prev->next = temp;
            // // Delete karna hai
            // prev->next = curr->next;
            // Node* NodeToDel = curr;
            // curr = curr->next;
            // NodeToDel->next = nullptr;
            // delete(NodeToDel);
        }
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,2);
    print(head);

    removeDuplicates2(head);

    print(head);


}