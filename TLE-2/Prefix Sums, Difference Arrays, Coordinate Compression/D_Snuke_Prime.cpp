#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

const int N = 1e6+1;
void solveAnswer(){
    ll n, c;
    cin>>n>>c;
    vector<long long> start(n), end(n), cost(n);
    for(int i = 0 ; i < n ; i++){
        cin>>start[i]>>end[i]>>cost[i];
    }
    set<long long> st;
    for(int i = 0 ; i < n ; i++){
        start[i]--;
        end[i]--; // 0 based indexing
        st.insert(start[i]);
        st.insert(end[i] + 1);
    }
    int idx = 0;
    map<int,int> m;
    for(auto it: st){
        m[it] = idx;
        idx++;
    }
    vector<ll> preComp(idx+1,0);
    for(int i = 0 ; i < n ; i++){
        preComp[m[start[i]]] += cost[i];
        preComp[m[end[i]+1]] -= cost[i];
    }
    for(int i = 1; i <= idx ; i++){
        preComp[i] = preComp[i] + preComp[i-1];
    }
    vector<long long> imp(st.begin(),st.end());
    long long ans = 0;
    for(int i = 1 ; i < int(imp.size()) ; i++){
        ll span = imp[i] - imp[i-1];
        ans += min(preComp[i-1],c)*span;
    }
    cout<<ans<<endl;
}
int main() {
    fast_io();
    int t = 1;
    //cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}