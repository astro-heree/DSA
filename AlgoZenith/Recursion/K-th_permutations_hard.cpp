#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
typedef long long ll;

int n,k;

vector<ll> fact;

void factorial(int n){
    ll val = 1;
    fact.push_back(1);
    for(int i = 1 ; i <= n ; i++){
        val *= i;
        fact.push_back(val);
    }
}

void solve(int k, vector<int> &v){
    if(k == 1){
        return;
    }


    for(int i = n-1 ; i >=0 ; i--){
        if(fact[n-i] >= k){
            ll nextFactVal = fact[n-i-1];
            // ll val = ceil(k/nextFactVal);
            ll val = ((k+nextFactVal-1)/nextFactVal);
            int ind = i + val - 1;
            int valueAtIndex = v[ind];
            v.erase(v.begin()+ind); 
            v.insert(v.begin()+i, valueAtIndex);
            solve(k-(nextFactVal*(val-1)),v);
            return;
        }
        else {

        }
    }
}


void solveAnswer(){
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 1 ; i <= n ; i++){
        v[i-1] = i;
    }
    // reverse(v.begin(),v.end());
    // for(auto it: fact){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    
    solve(k,v);
    // reverse(v.begin(),v.end());
    for(auto it: v) cout<<it<<" ";
    cout<<endl;

}
int main() {
    fast_io();
    int t = 1;
    //cin>>t; 
    while(t--){
        factorial(13);
        solveAnswer();
    }
    
    return 0;
}