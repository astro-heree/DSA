/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        //printing 1st triangle
        while(col <= n - row +1)
        {
            cout<<col;
            col++;
        }
        //printing 2nd triangle
        int c = row - 1;
        while(c>0)
        {
            cout<<"*";
            c--;
        }
        //printing the 3rd triangle
        int d = row - 1;
        while(d>0)
        {
            cout<<"*";
            d--;
        }
        // printing the 4th triangle
        int e = n;
        while(e>0)
        {
            cout<<e;
            e--;
        }

        cout<<endl;
        row++;
    }
}