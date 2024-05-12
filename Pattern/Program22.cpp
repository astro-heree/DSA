/*
1111
 222
  33
   4
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
        int space = row - 1;
        while (space > 0)
        {  
            cout << " ";
            space--;
        }
        int col = 1;
        while (col<= n - row +1)
        {
            cout<<row;
            col++;
        }
        
        cout << endl;
        row++;
    }
}