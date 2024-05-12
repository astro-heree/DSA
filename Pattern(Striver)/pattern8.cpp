/*
*****
 ***
  *
  for n = 3
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int row = 0 ; row)
    {
        int col = 1 +(row-1)*2;// col = 5
        for(int j = 0 ; j < row - col+2; j++) cout<<" ";
        for(int c = 0 ; c < col ; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}