#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n, m;
    cin>>n>>m;
    vector<string> v;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int cnt = 0;
    int i = 0;
    while(true){
        if(v[i].size() > m || i >= n){
            break;
        }else{
            m -= v[i].size();
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
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