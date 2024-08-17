#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

int returnCount(string &chocolates, string &choices){
    int ans = 0;
    int n = chocolates.size();
    int fpointer = 0, lpointer = n-1;
    for(auto it: choices){
        if(it == 'F'){
            if(chocolates[fpointer++] == 'R') ans++;
        }else{
            if(chocolates[lpointer--] == 'R') ans++;
        }
    }
    return ans;
}

void solveAnswer(){
    string s,t;
    cin>>s>>t;
    int ans = returnCount(s,t);
    cout<<ans<<endl;
    // int n,q;
    // cin>>n>>q;
    // vector<pair<ll,ll>> queries;
    // vector<ll> v;
    // vector<ll> product(n);
    // vector<ll> prefixSum(n);
    // for(int i = 0 ; i < n ; i++){
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }
    // for(int i = 0 ; i < q ; i++){
    //     int a,b;
    //     cin>>a>>b;
    //     a--,b--;
    //     queries.push_back({a,b});
    // }
    // for(int i = 0 ; i < n ; i++){
    //     ll val = v[i];
    //     val = ((v[i]%MOD) * ((ll)(i+1)%MOD)%MOD);
    //     product[i] = val;
    // }
    // prefixSum[0] = product[0];
    // for(int i = 1 ; i < n ; i++){
    //     prefixSum[i] = ((prefixSum[i-1])%MOD + (product[i])%MOD)%MOD;
    // }
    // for(int i = 0 ; i < q ; i++){
    //     ll l = queries[i].first, r = queries[i].second;
    //     ll ans = prefixSum[r];
    //     if(l > 0) ans = (ans - prefixSum[l-1] + MOD)%MOD;
    //     ll sum = v[r];
    //     if(l > 0) sum = (sum - v[l-1] + MOD)%MOD;
    //     ans = (ans - (l-1)*sum%MOD + MOD)%MOD;
    //     cout<<ans<<endl;
    // }
}
int main() {
    fast_io();
    int t = 1;
    while(t--){
        solveAnswer();
    }
    return 0;
}
