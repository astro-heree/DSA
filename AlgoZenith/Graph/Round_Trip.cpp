#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n,m;
// bool ans;
bool dfs(int node, vector<int> adj[], vector<int> &dfsVis, int par){
    dfsVis[node] = 1; // normal
   
    for(auto it: adj[node]){
        if(it==par) continue;
        if(!dfsVis[it]){
           bool ans = dfs(it, adj, dfsVis,node);
           if(ans) return true;
        }else if(dfsVis[node]==1){
           return true;
        }
        
    }
    dfsVis[node] = 2;
    return false;
  
}

void solveAnswer(){
    cin>>n>>m;
    vector<int> adj[n+1];
    
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n+1,0);

    bool ans = false;
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
           ans |= dfs(i, adj, vis, 0);
        }
    }

    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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