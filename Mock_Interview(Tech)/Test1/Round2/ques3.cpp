// You are using GCC
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //cout<<n;
    int row = n +(n-1);
    int col = row + (row - 1);
    int trow = row,tcol = col;
    //cout<<row<<" "<<col<<endl;
    char ch = int(n+96);
    //cout<<ch;
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            int dash = (col - row)/2;
            int tdash  = dash;
            while(dash != 0)
            {
                cout<<"-"; 
                dash--;
            }
            int use = ch - 
            //cout<<char(n+96-row);
            while(tdash != 0)
            {
               cout<<"-";
               tdash--;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}// You are using GCC
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //cout<<n;
    int row = n +(n-1);
    int col = row + (row - 1);
    int trow = row,tcol = col;
    //cout<<row<<" "<<col<<endl;
    char ch = int(n+96);
    //cout<<ch;
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            int dash = (col - row)/2;
            int tdash  = dash;
            while(dash != 0)
            {
                cout<<"-"; 
                dash--;
            }
            int use = ch - 
            //cout<<char(n+96-row);
            while(tdash != 0)
            {
               cout<<"-";
               tdash--;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}