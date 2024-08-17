#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

const int N = 1e6+5;
vector<int> frequency(N, 0);
vector<int> frequency2(N, 0);
vector<int> prefixSum(N, 0);
vector<int> prefixSum2(N, 0);

void solveAnswer(){
    int n, k, q;
    cin>>n>>k>>q;
    vector<pair<int,int>> v;
    vector<pair<int,int>> queries;
    
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        frequency[a]++;
        if(b < N){
            frequency[b+1]--;
        }
        v.push_back({a,b});
    }
    for(int i = 0 ; i < q ; i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        queries.push_back({a,b});
    }
    // for(auto it: frequency){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    prefixSum[0] = frequency[0];
    for(int i = 1; i < N ; i++){
        prefixSum[i] = prefixSum[i-1] + frequency[i];
    }
    // for(auto it: prefixSum){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    for(int i = 0 ; i < N ; i++){
        if(prefixSum[i] >= k){
            frequency2[i] = 1;
        }else{
            frequency2[i] = 0;
        }
    }
    // for(auto it: frequency2){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    prefixSum2[0] = frequency2[0];
    for(int i = 1; i < N ; i++){
        prefixSum2[i] = prefixSum2[i-1] + frequency2[i];
    }
    // for(auto it: prefixSum2){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    for(auto it: queries){
        int l = it.first, r = it.second;
        long long ans = (prefixSum2[r] + MOD)%MOD;
        if(l > 0){
            ans = (ans - (prefixSum2[l-1])%MOD + MOD)%MOD;
        }
        cout<<ans<<endl;
    }

}
int main() {
    fast_io();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}