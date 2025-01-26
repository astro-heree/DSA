#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,tar;
    cin>>n>>tar;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    vector<long long> pre(n,0);
    pre[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1]+v[i];
    }

    map<long long, long long> m;
    // for(auto it: pre){
    //     m[it]++;
    // }
    // for(auto it: pre){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it: m){
    //     cout<<it.first<<"->"<<it.second<<" ";
    // }
    // cout<<endl;
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        long long ele = pre[i];
        if(ele == tar){
            ans++;
            ans += m[0];
        }else{
            long long left = ele - tar;
            ans += m[left];
        }
        m[ele]++;
    }
    // ans += m[tar];
    cout<<ans<<endl;
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