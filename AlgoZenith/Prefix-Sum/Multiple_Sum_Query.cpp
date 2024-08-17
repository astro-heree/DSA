#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,q;
    cin>>n>>q;
    vector<pair<ll,ll>> queries;
    vector<ll> v;
    vector<ll> product;
    vector<ll> prefixSum(n);
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i = 0 ; i < q ; i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        queries.push_back({a,b});
    }
    //A[L] + A[L+1]*2 + A[L+2]*3 + A[L+3]*4...A[R]*(R-L+1)
    // sum of A[i]*(r-)


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