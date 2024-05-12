#include<bits/stdc++.h>
using namespace std;

// int solve(int m, int n)
// {
//     if(m == 0 || n == 0)
//     {
//         // ans++;
//         return 1;
//     }
//     return solve(m-1,n) + solve(m,n-1);
// }

int main()
{
    // int m,n;
    // cin>>m>>n;
    // int ans = 0;
    // ans = solve(m,n);
    // cout<<ans;
    //int arr[] = {5,3,7,9,11};
    vector<int> arr = {5,3,7,9,11};
    auto maxi = *max_element(arr.begin(),arr.end());
    //*max()
    cout<<maxi<<endl;
}