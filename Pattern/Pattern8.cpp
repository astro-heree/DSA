/*
1
23
345
4567
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
        int count = row;
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}