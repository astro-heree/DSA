#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

vector<int> temp(10000001,0);
vector<int> precompute(10000001,0);
vector<int> precompute2(10000001,0);

void solveAnswer(){
    int n, k, q;
    cin>>n>>k>>q;
    vector<pair<int,int>> v;
    vector<pair<int,int>> queries;
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        v.push_back(make_pair(a,b));
        temp[a] += 1;
        if(b < n) temp[b+1] -= 1;
    }
    
    for(int i = 0 ; i < q ; i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        queries.push_back(make_pair(a,b));
    }
    precompute[0] = temp[0];
    for(int i = 1 ; i < n ; i++){
        precompute[i] = precompute[i-1] + temp[i];
    }

    for(auto &it: precompute){
        it = !(it<k);
    }

    precompute2[0] = precompute[0];
    for(int i = 1 ; i < n ; i++){
        precompute2[i] = precompute[i] + precompute2[i-1];
    }

    for(auto it: queries){
        int l = it.first;
        int r = it.second;
        int ans = precompute2[r];
        if(l > 0){
            ans = ans - precompute2[l-1];
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