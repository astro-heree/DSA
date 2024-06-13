#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first

int MOD  = 1e9+7;

void solveAnswer(){
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    ll ans = 0;
    for(ll i = 1 ; i <= x ; i++){
        for(ll j = 1; j <= y ; j++){
            long long l = k / (i*j);
            if(k % (i*j) != 0){
                continue;
            }
            if(k < z){
                
            }
        }
    }
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