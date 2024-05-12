#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n = 20121; // 1554
    int temp = 0;
    int ans = 0;
    int c = -1;
    while(n>0)
    {
        temp = n % 10;
        c++;
        int p = 10**c;
        if(temp == 0) 
        {
            ans = ans + 5 * p;
        }
        else 
        {
            ans = ans + temp*p;
        }
        n = n / 10;
    }
    cout<<ans<<endl;
}
