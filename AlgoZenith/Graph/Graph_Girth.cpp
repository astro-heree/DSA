#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
#define MP make_pair
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;
vector<int> vis;
int ans;

void bfs(int node){
    queue<int> q;
    q.push(node);
    vis[node] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto nbr: g[node]){
            if(vis[nbr] == INT_MAX){
                q.push(nbr);
                vis[nbr] = vis[node]+1;
            }
            else if(vis[node] <= vis[nbr]){
                ans = min(ans,vis[nbr]+vis[node]+1);
                if(vis[nbr] == vis[node]) return;
            }
        }
    }
}

void solveAnswer(){
    cin>>n>>m;
    ans = INT_MAX;
    g.resize(n+1);
    

    for(int i = 0 ; i < m ; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i = 1 ; i <= n ; i++){
        vis.assign(n+1,INT_MAX);
        bfs(i);
    }

    cout<<((ans == INT_MAX) ? -1 : ans);

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