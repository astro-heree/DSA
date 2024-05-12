#include<iostream>
using namespace std;

// This is abstract class.
class AbstractClass
{
    // this is pure virtual function
    virtual void AskForPromotion() = 0;
};
// Here we are forcing any class who signs a contract with/inherits the AbstractClass to implement a function AskForPromotion

// So by doing :AbstractClass our employee class has successfully signed a contract/inherited with the Abstraction Class
class Employee:AbstractClass
{
public:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    {
        this->Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(age >= 18)
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void introduceYourself()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }

    void AskForPromotion()
    {
        if(Age > 30) cout<<Name<<" got promoted "<<endl;
        else cout<<Name<<", sorry No promotion for you!"<<endl; 
    }
    // this is a virtual function.
    // if a virtual function is invoked it checks if there is an implementation of the function in the derived class.
    // if there is then that function is invoked.
    virtual void Work()
    {
        cout<<Name<<" is checking email, tasks backlog, performing tasks.... "<<endl;
    }
};

// Developer is a derived/child class of employee.
// employee is parent/superclass.
// If we have inherited from a parent class and it has it's own constructor, then the default constructor is deleted.
class Developer: public Employee 
// This inheritance is private by default, if we use public keyword before employee it should be public.
{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name,company,age) 
    // since we inherited from the employee class, the constructor of the employee class will take care of the three properties.
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug()
    {
        cout<<getName()<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
    void Work()
    {
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code "<<endl;
    }
};

class Teacher: public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) : Employee(name,company,age)
    {
        Subject = subject;
    }
    void prepareLesson()
    {
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    void Work()
    {
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};

int main()
{
    // Employee employee1 = Employee("Aman","ABCD",25);
    // // employee1.Name = "Aman";
    // // employee1.Company = "ABCD";
    // // employee1.Age = 21;
    // employee1.introduceYourself();

    // Employee employee2 = Employee("John","Amazon",22);
    // employee2.Name = "John";
    // employee2.Company = "Amazon";
    // employee2.Age = 22;
    // employee2.introduceYourself();

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    // employee1.setAge(39);
    // cout<<employee1.getName()<<" is "<<employee1.getAge()<<" working in "<<employee1.getCompany();

    // Developer d = Developer("Aman","ABCD",21,"C++");
    // d.fixBug();
    // d.AskForPromotion();

    Teacher t = Teacher("Jack","CoolSchool",35,"Maths");
    // t.prepareLesson();
    t.Work();
    // t.AskForPromotion();
    
    // Employee *e1 = &d;
    // Employee *e2 = &t;

    // e1->Work();
    // e2->Work();

    // The most common use of polymorphism is when a parent class reference is used to refer to a child class object.
}