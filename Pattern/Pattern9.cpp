/*
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row =1;
    while(row<=n)
    {
        int a = row;
        int col = 1;
        while(col<= row)
        {
            cout<<a;
            a--;
            col++;
        }
        cout<<endl;
        row++;
    }
}