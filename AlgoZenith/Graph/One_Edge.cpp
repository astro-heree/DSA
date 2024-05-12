#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;

void dfs(int node, int val, vector<int> &vis, map<int,int> &m){
    vis[node] = val;
    m[val]++;

    for(auto it: g[node]){
        if(!vis[it]){
            dfs(it,val,vis,m);
        }
    }
}

void solveAnswer(){
    cin>>n>>m;
    g.resize(n+1);
    for(int i = 0 ; i < m ; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> vis(n+1,0);
    map<int,int> m;
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            dfs(i,++cnt,vis,m);
        }
    }
    long long ans = 0;
    // for(auto it: m){
    //     cout<<it.first<<"->"<<it.second<<" ";
    // }
    // cout<<endl;
    if(m.size() == 1) cout<<0<<endl;
    else{
        vector<int> vals;
        for(auto it: m){
            vals.push_back(it.second);
        }
        ll sum = 0;
        for(int i = 0 ; i < vals.size() ; i++){
            ans += sum*vals[i];
            sum += vals[i];
        }
        cout<<ans<<endl;
    }

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