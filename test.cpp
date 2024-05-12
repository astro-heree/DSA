#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n,k;
vector<vector<int>> allPermu;

void solve(vector<int> &v, vector<int> temp, int mask){
    if((int)temp.size() == n){
        allPermu.push_back(temp);
        return;
    }

    for(int i = 0 ; i < n ; i++){
        if((1 << i) & mask){
            
        }
        else {
            temp.push_back(v[i]);
            mask = (1 << i) | mask; // technique to turn on a particular bit.
            solve(v, temp, mask);
            mask = (1 << i) ^ mask; // technique to turn off a particular bit.
            temp.pop_back();
        }
    }
}

void solveAnswer(){

    cin>>n>>k;
    vector<int> v(n);
    for(int i = 1 ; i <= n ; i++) v[i-1] = i;

    vector<int> temp;
    solve(v, temp, 0);


    for(int i = 0 ; i < n ; i++){
        cout<<allPermu[k-1][i]<<" ";
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