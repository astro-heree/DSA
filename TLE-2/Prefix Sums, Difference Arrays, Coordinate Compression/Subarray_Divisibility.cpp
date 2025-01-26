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
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    vector<long long> pre(n+1, 0);
    pre[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        pre[i] = v[i] + pre[i-1];
    }

    vector<int> freq(n+1, 0);
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        int rem = pre[i]%n;
        ans += freq[rem];
        freq[rem]++;
        
    }
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