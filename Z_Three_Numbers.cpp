#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int k,s;
    cin>>k>>s;
    int ans = 0;
    for(int x = 0 ; x <= k ; x++){
        for(int y = 0 ; y <= k ; y++){
            int val = s - x - y;
            if(val <= k && val >= 0){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    fast_io();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}