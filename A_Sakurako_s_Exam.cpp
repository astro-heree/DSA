#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Initialize a 2D DP array with dimensions (n x k+1) to store subproblem results
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));

    // Base case: If the target sum is 0, we can always achieve it by taking no elements
    for (int i = 0; i < n; i++) {
        dp[i][0] = true;
    }

    // Base case: If the first element of 'arr' is less than or equal to 'k', set dp[0][arr[0]] to true
    if (arr[0] <= k) {
        dp[0][arr[0]] = true;
    }

    // Fill the DP array iteratively
    for (int ind = 1; ind < n; ind++) {
        for (int target = 1; target <= k; target++) {
            // If we don't take the current element, the result is the same as the previous row
            bool notTaken = dp[ind - 1][target];

            // If we take the current element, subtract its value from the target and check the previous row
            bool taken = false;
            if (arr[ind] <= target) {
                taken = dp[ind - 1][target - arr[ind]];
            }

            // Store the result in the DP array for the current subproblem
            dp[ind][target] = notTaken || taken;
        }
    }

    // The final result is stored in dp[n-1][k]
    return dp[n - 1][k];
}

void solveAnswer(){
    int a,b;
    cin>>a>>b;
    vector<int> v;
    int sum = a + 2*b;
    if(sum % 2 != 0){
        cout<<"NO"<<endl;
    }else if (sum == 0){
        cout<<"YES"<<endl;
    }
    else{
        for(int i = 0 ; i < a ; i++){
            v.push_back(1);
        }
        for(int j = 0; j < b ; j++){
            v.push_back(2);
        }

        bool ans = subsetSumToK(a+b, sum/2, v);
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
int main() {
    fast_io();
    int t = 1;
    cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}