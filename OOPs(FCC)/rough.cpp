#include<iostream>
using namespace std;

class animal{
    public:
    virtual void eat()
    {
        cout<<"animal eating"<<endl;
    }
};

class dog: public animal{
    public:
    void eat()
    {
        cout<<"dog eating"<<endl;
    }
};

int main()
{
    animal a;
    a.eat();
}