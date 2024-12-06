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
    vector<int> v(n);
    string color;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    cin>>color;

    // map<int,int> m;
    vector<int> m(n, -1); 
    int i = 1,  j = 1; //use i-1 for index accessing
    while(i <= n){
        vector<int> vis(n, 0);
        vector<int> loop;
        int cnt = 0;
        j = i;
        while(1){
            int updatedJ = j-1;
            if(m[updatedJ] != -1) break;
            if(vis[updatedJ]) break;
            vis[updatedJ] = 1;
            loop.push_back(updatedJ);
            if(color[updatedJ] == '0') cnt++;
            j = v[updatedJ];
        }
        for(auto it: loop){
            m[it] = cnt;
        }
        i++;
    }

    for(int i = 0 ;i < n ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
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