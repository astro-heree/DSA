#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
#define printVector(v) for(auto it: v) cout<<it<<" "; cout<<endl;
#define printVecVector(v) for(auto &it: v) { for(auto &jt: it) cout<<jt<<" ",cout<<endl;} cout<<endl;
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;

bool ans;

void print(queue<pair<int,int>> q){
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<endl;
}

void bfs(int node, vector<int> &vis){
    queue<int> q;
    q.push(node);
    vis[node] = 1;
    while(!q.empty()){
        int front = q.front();
        int color = vis[front];
        q.pop();

        for(auto nbr: g[front]){
            if(!vis[nbr]){
                q.push(nbr);
                if(color == 1){
                    vis[nbr] = 2;
                }else vis[nbr] = 1;
            }else{
                if(vis[nbr] == color){
                    ans = false;
                    break;
                }
            }
        }
    }
    return;
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
    ans = true;
    vector<int> vis(n+1,0);
    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            bfs(i,vis);
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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