#include<iostream>
using namespace std;

class A
{
    public:
    void function1()
    {
        cout<<"Inside Function1"<<endl;
    }
};

class B:public A
{
    public:
    void function2()
    {
        cout<<"Inside Function2"<<endl;
    }
};

class C:public A
{
    public:
    void function3()
    {
        cout<<"Inside Function3"<<endl;
    }
};

int main()
{
    A object1;
    object1.function1();

    B object2;
    object2.function1();
    object2.function2();

    C object3;
    object3.function1();
    object3.function3();
    return 0;
}