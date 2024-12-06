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
    vector<vector<char>> a(n,vector<char> (m));
    vector<vector<char>> b(n,vector<char> (m));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>b[i][j];
        }
    }
    bool ans = true;
    vector<pair<int,int>> m1, m2;
    for(int i = 0 ; i < n ; i++){
        int cntDot = 0, cntHash = 0;
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == '.') cntDot++;
            else cntHash++;
        }
        m1.push_back({cntDot, cntHash});
        cntDot = 0, cntHash = 0;
        for(int j = 0 ; j < m ; j++){
            if(b[i][j] == '.') cntDot++;
            else cntHash++;
        }
        m2.push_back({cntDot, cntHash});
    }
    // for(auto it: m1){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    // cout<<endl;
    // for(auto it: m2){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    // cout<<endl;
    for(int j = 0 ; j < (int)m1.size() ; j++){
        int dot = m1[j].first;
        int hash = m1[j].second;
        bool found = false;
        for(int i = 0 ; i < (int)m2.size() ; i++){
            if(dot == m2[i].first && hash == m2[i].second){
                found = true;
                m2[i] = {-1,-1};
                break;
            }
        }
        // cout<<"M2 at j: "<<j<<endl;
        // for(auto it: m2){
        //     cout<<it.first<<"->"<<it.second<<endl;
        // }
        // cout<<endl;
        // cout<<"Found: "<<found<<endl;
        if(!found){
            ans = false;
            break;
        }

    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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