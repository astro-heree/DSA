#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,x;
    cin>>n>>x;
    long long ans = 0;
    for(int i = 1 ; i < x ; i++){
        for(int j = 1 ; j < x ; j++){
            for(int k = 1 ; k < x ; k++){
                long long sum = i+j+k;
                if(sum > x){
                    continue;
                }
                long long prod = 1LL*i*j;
                if(prod > n) continue;
                prod += 1LL*j*k;
                if(prod > n) continue;
                prod += 1LL*i*k;
                if(prod > (long long) n) continue;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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