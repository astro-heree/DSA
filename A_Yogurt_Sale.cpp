#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n;

void solveAnswer(){
    int a,b;
    cin>>n>>a>>b;
    if((2*a) > b){
        int times = n/2;
        int left = n%2;
        long long ans = times*b + left*a;
        cout<<ans<<endl;
    }else{
        cout<<n*a<<endl;
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