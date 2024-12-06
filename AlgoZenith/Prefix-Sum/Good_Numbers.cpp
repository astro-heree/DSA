#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<pair<int,int>> v(n);
    vector<pair<int,int>> queries(q);
    vector<int> prefixSum(1e6+2,0);
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[i] = {a,b};
        prefixSum[a]++;
        prefixSum[b+1]--;
    }

    for(int i = 0 ; i < q ; i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        queries[i] = {a,b};
    }
    vector<int> prefixSum2(1e6+2);
    prefixSum2[0] = prefixSum[0];
    for(int i = 1 ; i < 1e6+2; i++){
        prefixSum2[i] = prefixSum2[i-1] + prefixSum[i];
    }

    vector<int> prefixSum3(1e6+2);
    for(int i = 0 ; i < 1e6+2 ; i++){
        if(prefixSum2[i] >= k){
            prefixSum3[i] = 1;
        }else{
            prefixSum3[i] = 0;
        }
    }
    vector<int> prefixSum4(1e6+2);
    prefixSum4[0] = prefixSum3[0];
    for(int i = 1 ; i < 1e6+2 ; i++){
        prefixSum4[i] = prefixSum4[i-1] + prefixSum3[i];
    }

    for(auto it: queries){
        int l = it.first, r = it.second;

        ll ans = (prefixSum4[r] + MOD)%MOD;
        if(l > 0){
            ans = (ans - (prefixSum4[l-1])%MOD + MOD)%MOD;
        }
        cout<<ans<<endl;
    }
    

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