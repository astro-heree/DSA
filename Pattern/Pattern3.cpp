#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int i = 1;
    while(i<=a)
    {
        int j = a;
        while(j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}