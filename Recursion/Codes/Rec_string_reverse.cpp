#include<iostream>
using namespace std;

void reverse( string &name , int s , int e)
{
    //base case 
    if(s>e)
    {
        return ;
    }
    else
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    reverse(name , s , e);

}

int main()
{
    string name = "carrace";
    reverse(name , 0 , name.length()-1);
    cout<<"The reversed string is : "<<name<<endl;
}