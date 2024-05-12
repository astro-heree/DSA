/*
****
***
**
*
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 0;
        col = n - row +1;
        while (col > 0)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
}