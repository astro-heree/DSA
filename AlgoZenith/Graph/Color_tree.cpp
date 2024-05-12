#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n;
vector<vector<int>> g;

// void dfs(int node, int par, int supPar){
//     // assign color
//     if(supPar){
//         //then par also exists
//         int cnt = 1;
//         while(!color[node]){
//             if(cnt == color[par] || cnt == color[supPar]){
//                 cnt++;
//             }else{
//                 color[node]=cnt;
//             }
//         }
//     }
//     else if(par){
//         int cnt = 1;
//         while(!color[node]){
//             if(cnt == color[par]){
//                 cnt++;
//             }else{
//                 color[node]=cnt;
//             }
//         }
//     }
//     else{
//         color[node] = 1;
//     }

//     for(auto it: g[node]){
//         if(color[it] == 0){
//             dfs(it, node, par);
//         }
//     }
// }

void solveAnswer(){
    cin>>n;

    g.resize(n+1);
    for(int i = 0 ; i < n-1 ; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    // for(auto it: g){
    //     for(auto jt: it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans = INT_MIN;
    for(auto &it: g){
        int degree = it.size();
        ans = max(ans,degree);
    }
    cout<<ans+1<<endl;
    // for(int i = 1 ; i <= n ; i++){
    //     if(!color[i]){
            // dfs(1,0,0);
    //     }
    // }
    // for(auto it: color){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // set<int> st;
    // for(auto it: color){
    //     st.insert(it);
    // }

    // cout<<st.size()-1<<endl;

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