#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;
vector<int> vis;
vector<int> indegree;
vector<int> ans;

void bfs(){
    priority_queue < int , vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0) pq.push(i);

    while (!pq.empty()) {
        int front = pq.top();
        pq.pop();
        ans.push_back(front);
        for (auto it : g[front]) {
            indegree[it]--;
            if (indegree[it] == 0) pq.push(it);
        }
    }
    
}

void solveAnswer(){
    cin>>n>>m;
    g.resize(n+1);
    vis.assign(n+1,0);
    indegree.assign(n+1,0);
    for(int i = 1 ; i <= m ; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        indegree[b]++;
    }

    bfs();  

    if (ans.size() != n) {
        cout << -1 << endl;
    }else{
        for (auto it : ans)
            cout << it << " ";

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