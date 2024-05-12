#include <bits/stdc++.h>
using namespace std;

int fibo(int a)
{
    // 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34.....
    // base case
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }

    // recurence relation
    int ans = return fibo(a - 1) + fibo(a - 2);
   return ans;
}

int main()
{
    int a;
    cout << "Enter the term";
    cin >> a;
    cout << fibo(a);
}
