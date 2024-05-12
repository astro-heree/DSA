#include <iostream>
using namespace std;

int factorial(int a){
     // base case
     if(a==0)
     {
        return 1;
     }
     // recursive relation

     return a*factorial(a-1);

}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin>>a;
    int result = factorial(a);
    cout<<result;
    

}
