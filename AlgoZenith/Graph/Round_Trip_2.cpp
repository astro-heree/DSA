#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define MP make_pair

int n,m;
// vector<vector<int>> g;
vector<int> vis;
vector<int> dfsVis;

// bool dfs(int node, int par){
//     vis[node] = 1; 
//     dfsVis[node] = 1;//good
//     for(auto nbr: g[node]){
//         if(!vis[nbr]){
//             bool ans = dfs(nbr,node);
//             if(ans) return true;
//         }else if(dfsVis[nbr]){
//             return true;
//         }
//     }
//     dfsVis[node] = 0;
//     return false;
// }

// bool bfs(int node){
//     queue<pair<int,int>> q;
//     q.push({node,-1});

//     vis[node] = 1;
//     while(!q.empty()){
//         int front = q.front().first;
//         int par = q.front().second;
//         q.pop();
//         for(auto it: g[front]){
//             if(it == par) continue;
//             else if(!vis[it]){
//                 if(vis[node] == 1){
//                     vis[it] = 2;
//                 }else{
//                     vis[it] = 1;
//                 }
//                 q.push({it,front});
//             }else{
//                 return false;
//             }
//         }
//     }
//     return true;
// }

bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &dfsVis){
    vis[node] = 1; 
    dfsVis[node] = 1;
    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            bool ans = dfs(nbr,adj,vis,dfsVis);
            if(ans) return true;
        }else if(dfsVis[nbr]){
            return true;
        }
    }
    dfsVis[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    
}

void solveAnswer(){
    cin>>n>>m;
    // g.resize(n+1);
    vector<int> adj[n+1];
    vis.assign(n+1,0);
    dfsVis.assign(n+1,0);
    for(int i = 0 ; i < m ; i++){
        int a,b;
        cin>>a>>b;
        if(a==b) continue;
        adj[a].push_back(b);
    }
    
    bool ans = false;
    vector<int> vis(V,0);
    vector<int> dfsVis(V,0);
    for(int i = 1 ; i <= V ; i++){
        if(!vis[i]){
            ans |= dfs(i, adj, vis, dfsVis);
        }
    }

    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    g.clear();
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