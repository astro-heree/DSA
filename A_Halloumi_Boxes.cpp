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
    bool isSorted = true;
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] > v[i+1]){
            isSorted = false;
            break;
        }
    }
    if(m == 1 && !isSorted) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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