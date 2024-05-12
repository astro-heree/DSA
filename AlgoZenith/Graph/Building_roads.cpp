#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;
int cnt;

// void dfs(int node, vector<int> &vis){
//     vis[node] = 1;
//     for(auto it: g[node]){
//         if(!vis[it]){
//             dfs(it,vis);
//         }
//     }
// }

void bfs(int node, vector<int> &vis){
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto it: g[front]){
            if(!vis[it]){
                q.push(it);
                vis[it] = 1;
            }
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
    cnt = 0;
    vector<int> vis(n+1,0);
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            // dfs(i,vis);
            bfs(i,vis);
            cnt++;
        }
    }
    cout<<cnt-1<<endl;
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