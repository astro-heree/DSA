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
    vector<int> v = {4, 7, 47, 74, 444, 447, 474, 477, 744, 774, 777};
    int ans = false;
    for(auto it: v){
        if(n%it == 0){
            ans = true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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