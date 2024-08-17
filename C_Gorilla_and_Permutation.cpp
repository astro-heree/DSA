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
    vector<int> ans;
    while(n>m){
        ans.push_back(n);
        n--;
    }
    for(int i = 1 ; i <= m ; i++){
        ans.push_back(i);
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
    
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