#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int l,r;
    cin>>l>>r;
    int i = l;
    int cnt = 0;
    int add = 1;
    while(i<=r){
        // cout<<cnt<<" "<<i<<" "<<add<<endl;
        cnt++;
        i += add;
        add++;
    }
    cout<<cnt<<endl;
    // vector<int> precompute;
    // int i = 1;
    // int last = i;
    // while(i < 100){
    //     precompute.push_back(i);
    //     last = i;
    //     i = i+last;
    // }
    // for(auto it: precompute){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
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