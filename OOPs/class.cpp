// #include <bits/stdc++.h>
#include<cstring>
#include<iostream>
using namespace std;

class Hero
{
    //properties;
    // health is private so we cannot use it outside the class so we need to use getter and setters in order to access it outside class
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout<<"Simple Constructor Called "<<endl;
        name = new char[100]; 
    }
    // Parameterised constructor 
    Hero(int health)
    {
        this ->health = health;
        // cout<<"This is -> "<<this<<endl;
        // cout<<"Constructor is called."<<endl;
    } 

    Hero(int health , char level)
    {
        this -> level = level;
        this -> health = health;
    }

    //Copy Constructor
    Hero(Hero& temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this-> name = ch;
        cout<<"Copy Constructor called"<<endl;
        this->health = temp.health;
        this-> level = temp.level; 
    }

    void print()
    {
        cout<<"Name is: "<<this->name<<" , ";
        cout<<"Health is: "<<this->health<<" ,";
        cout<<"Level is: "<<this->level<<endl;
    }
    
    int getHealth()
    {
        return health;
    }
    
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }
    //Destructor
    ~Hero()
    {
        cout<<"Distructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{
    //cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;





/*
    //Static
    Hero a;

    //Dynamically
    Hero *b = new Hero();

    // manually destructor called
    delete b;
    











    /*
    Hero S(70 , 'C');
    S.print();

    //Copy Constructor
    Hero R(S);
    R.print();
    
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    //hero1.print();

    //using default copy constructor

    Hero hero2(hero1);
    //hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    hero1.print();

    hero2.print();

    */

    













    /*
    //object created statically
    Hero a(10);
    // cout<<"Address of a : "<<&a<<endl;
    a.print();

    //dynamic creation

    Hero *b = new Hero(23);  
    b-> print();

    Hero temp(11 , 'C');   
    temp.print();
    */

    






    /*
    //creating an object of class hero
    //static allocation
    Hero ramesh;
    ramesh.setHealth(98);
    ramesh.setLevel('A');
    cout<<"Health is: "<<ramesh.level<<endl;
    cout<<"Level is: "<<ramesh.getHealth()<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(78);
    b->setLevel('B');

    cout<<"Health is: "<<(*b).level<<endl;
    cout<<"Level is: "<<(*b).getHealth()<<endl;

    // if we have (*b). can also be written as ->
    cout<<"Health is: "<<b->level<<endl;
    cout<<"Level is: "<<b->getHealth()<<endl;
    // we cannot set health by using dot operator as health is private .
    // ramesh.health = 70;
    //so we will have to use setters for the following operation.
    // ramesh.setHealth(98);
    // ramesh.level = 'A';
    // cout<<"Health is: "<<ramesh.getHealth()<<endl;
    // cout<<"Level is: "<<ramesh.level<<endl;
    */
}