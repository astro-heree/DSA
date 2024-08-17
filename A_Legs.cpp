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
    map<char,int> m;
    m['a'] = 1;
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<endl;
    cout<<m.size()<<endl;
    // int cnt = n/4;
    // int temp = n % 4;
    // cnt += temp/2;
    // cout<<cnt<<endl;
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