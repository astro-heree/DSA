#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
    int size;
    int *arr;
    int top;

    Stack(int n)
    {
        this->size = n;
        top = -1; 
        arr = new int[n];
    }
    void push(int data)
    {
        if(top<size-1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop()
    {
        if(top == -1) cout<<"Stack UnderFlow"<<endl;
        else 
        {
            //arr[top] = 0;
            top--;
        }
    }
    int peek()
    {
        if(top >= 0) 
        return arr[top];
        else
        {
            cout<<"Invalid element access"<<endl;
            return -1;
        } 
        
    }
    bool isEmpty()
    {
        if(top != -1) return false;
        else return true;

        // if(top == -1) return true;
        // else return false;
    }

};

int main()
{

    Stack st(5);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(7);
    st.push(9);
    //st.pop();
    // cout<<st.peek()<<endl;//4
    // st.push(6);
    // cout<<st.peek()<<endl;//6
    //cout<<st.isEmpty();
    // if(st.isEmpty()) cout<<"Stack is empty";
    // else cout<<"Stack is not empty";
    st.push(10);
    //st.push(11);
    
    return 0;
}