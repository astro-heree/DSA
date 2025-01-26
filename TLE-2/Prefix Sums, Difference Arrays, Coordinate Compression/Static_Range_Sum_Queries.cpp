#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    vector<pair<int,int>> q;
    for(int j = 0 ; j < m ; j++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        q.push_back({a,b});
    }

    vector<long long> pre(n, 0);
    pre[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1]+v[i];
    }
    // for(auto it: pre){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    for(auto it: q){
        long long s = it.first;
        long long e = it.second;

        long long ans = pre[e];
        if(s > 0){
            ans -= pre[s-1];
        }
        cout<<ans<<endl;
    }
    
}
int main() {
    fast_io();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}