#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    vector<pair<int,int>> queries(q);
    for(int i = 0 ; i < q ; i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        queries[i] = {a,b};
    }

    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        prefixSum[i] = ((prefixSum[i-1])%MOD + (v[i])%MOD)%MOD;
    }

    for(auto it: queries){
        int l = it.first;
        int r = it.second;
        ll ans = prefixSum[r];
        if(l >= 1){
            ans = ((ans)%MOD - (prefixSum[l-1])%MOD + MOD) % MOD;
        }
        if(ans < 0) ans += MOD;
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