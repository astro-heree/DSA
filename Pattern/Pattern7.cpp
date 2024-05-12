/*
1
23
456
78910
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 1;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while(col<= row)
        {
            cout<<count<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}