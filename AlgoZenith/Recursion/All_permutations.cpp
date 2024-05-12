#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
typedef long long ll;

ll n;
vector<vector<ll>> all_permu;
vector<ll> curr_permu;
map<ll,ll> m;

void solve(int ind){
    if(ind == n){
        all_permu.push_back(curr_permu);
    }

    for(auto it: m){
        if(it.second != 0){
            m[it.first]--;
            curr_permu.push_back(it.first);
            solve(ind+1);
            curr_permu.pop_back();
            m[it.first]++;
        }
    }
}

void solveAnswer(){
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    solve(0);

    for(auto &it: all_permu){
        for(auto &jt: it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
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