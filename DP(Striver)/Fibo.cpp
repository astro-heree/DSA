#include<iostream>
#include<vector>
using namespace std;


// Memoization
// int fibo(int n, vector<int> &dp)
// {
//     if(n <= 1) return n;
//     if(dp[n] != -1) return dp[n];
    
//     return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
// }

// int main()
// {
//     int n = 5;
//     vector<int> dp(n+1,-1);
//     cout<<"The value is: "<<fibo(n,dp)<<endl;
//     for(auto i: dp) cout<<i<<" ";
//     // 0 1 1 2 3 5 
// }

// tabulation
// int main()
// {
//     int n = 5;
//     vector<int> dp(n+1, -1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout<<dp[n]<<endl;
// }


// space optimisation
int main()
{
    int n = 5;
    int prev2 = 0, prev = 1;
    for(int i = 2; i<=n ; i++)
    {
        int curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
}