#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    string s;
    cin>>s;
    int st = 0, e = n-1;
    ll sum = 0;
    vector<ll> pre(n);
    pre[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1]+v[i];
    }
    // for(auto it: pre){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    while(st < e){
        if(s[st] == 'L' && s[e] == 'R'){
            ll val = pre[e];
            if(st > 0){
                val -= pre[st-1];
            }
            sum += val;
            st++;
            e--;
        }
        if(s[st] != 'L'){
            st++;
        }
        if(s[e] != 'R'){
            e--;
        }
    }
    cout<<sum<<endl;
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