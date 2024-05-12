#include<iostream>
using namespace std;

class A
{
    public:
    void sayHello()
    {
        cout<<"Hello There!"<<endl;
    }

    void sayHello(string name)
    {
        cout<<"Hello There!"<<endl;
    }

    int sayHello(string name , int n)
    {
        cout<<"Hello There!"<<endl;
        return n;
    }
};

int main()
{
    A obj1;
    obj1.sayHello();
    return 0;
}