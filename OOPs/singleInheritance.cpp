#include<iostream>
using namespace std;

class Animal
{
    public:
    int weight;
    int age;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }

};

class Dog: public Animal
{
     
};

class GermanShepard:public Dog
{

};

int main()
{

    GermanShepard g;
    g.speak();
    cout<<g.age<<endl;


    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;

    return 0;
}