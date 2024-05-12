#include<iostream>
using namespace std;

// class Students
// {
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     void getAge()
//     {
//         return this->age;
//     }
// };

class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};
// here male class is inheriting Human class in public mode

class Male: public Human
{
    public:
    string color;

    void sleep()
    {
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight()
    {
        return this->height;
    }
};


int main()
{
    Male m1;
    cout<<m1.getHeight()<<endl;







    /*
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();
    */

}