#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int maxi = INT_MIN, ind = -1;
    for(int i = 0 ; i < k ; i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(maxi < a){
            ind = i;
            maxi = a;
        }
    }
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int ans = 0;
    // cout<<ind<<endl;
    for(int i = 0 ; i < k ; i++){
        if(i == ind) continue;
        if(v[i] > 1){
            ans += v[i] - 1;
        }
        ans += v[i];
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