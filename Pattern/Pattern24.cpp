/*
   1
  121 
 12321
1234321
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
        int space = n - row;
        while(space > 0)
        {
            cout<<" ";
            space--;
        }
        int col = 1;
        int count = 1;
        while(col<= row)
        {
            cout<<count;
            count++;
            col++;
        }
        int c = row - 1;
        while(c> 0)
        {
            cout<<c;
            c--;

        }
        cout<<endl;
        row++;
    }
}