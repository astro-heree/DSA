/*
AAA
BBB
CCC
*/
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int row = 1;
    while (row<= a)
    {
        int col = 1;
        char ch = 'A' + row - 1;
        while (col<=a)
        {
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}
