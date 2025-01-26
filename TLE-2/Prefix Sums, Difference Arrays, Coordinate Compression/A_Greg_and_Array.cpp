#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long> t(n);
    for(int i = 0 ; i < n ; i++){
        cin>>t[i];
    }
    vector<long long> pre(n,0);
    for(int i = 0 ; i < k ; i++){
        int l,r,x;
        cin>>l>>r>>x;
        pre[l] += x;
        if(r < n-1){
            pre[r] -= x;
        }
    }
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1] + t[i];
    }
    // for(int i = 0 ; i < n ; i++){
    //     t[i] = t[i-1] + pre[i];
    // }
    for(auto it: t){
        cout<<it<<" ";
    }
    cout<<endl;
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