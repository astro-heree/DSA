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
    vector<vector<char>> v(n, vector<char> (n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>v[i][j];
        }
    }

    vector<vector<int>> q(m);
    for(int i = 0 ; i < m ; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a--;
        b--;
        c--;
        d--;
        q[i] = {a,b,c,d};
    }

    vector<vector<int>> pre(n, vector<int> (n,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            pre[i][j] = (v[i][j] == '*');
            if(i > 0){
                pre[i][j] += pre[i-1][j];
            }
            if(j > 0){
                pre[i][j] += pre[i][j-1];
            }
            if(i > 0 && j > 0){
                pre[i][j] -= pre[i-1][j-1];
            }
        }
    }
    
    for(int i = 0 ; i < m ; i++){
        int l1 = q[i][0], r1 = q[i][1], l2 = q[i][2], r2 = q[i][3];

        long long ans = pre[l2][r2];
        if(l1 > 0){
            ans -= pre[l1-1][r2];
        }
        if(r1 > 0){
            ans -= pre[l2][r1-1];
        }
        if(l1 > 0 && r1 > 0){
            ans += pre[l1-1][r1-1];
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