#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>v[i][j];
            v[i][j]--;
        }
    }
    vector<vector<int>> vis(n,vector<int>(n,0));
    for(int i = 0 ; i < n ; i++){
        vis[i][i] = 1;
    }

    for(int i = 0 ; i < m ; i++){
        vector<int> temp = v[i];
        for(int j = 1 ; j < n - 1 ; j++){
            vis[temp[j]][temp[j+1]] = 1;
            vis[temp[j]][temp[j-1]] = 1;
        }
        vis[temp[0]][temp[1]] = 1;
        vis[temp[n-1]][temp[n-2]] = 1;
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(!vis[i][j]) cnt++;
        }
    }
    cout<<cnt/2<<endl;
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