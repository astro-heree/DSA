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
    vector<int> v(n, 0);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<vector<int>> q;
    for(int i = 0 ; i < m ; i++){
        int a,b,c;
        cin>>a>>b>>c;
        b--;
        c--;
        q.push_back({a,b,c});
    }
    // for(auto it: q){
    //     for(auto jt: it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<int> temp = v;
    sort(temp.begin(),temp.end());
    vector<long long> pre1(n,0), pre2(n,0);
    
    pre1[0] = v[0];
    pre2[0] = temp[0];
    for(int i = 1 ; i < n ; i++){
        pre1[i] = pre1[i-1] + v[i];
        pre2[i] = pre2[i-1] + temp[i];
    }
    // for(auto it: pre1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it: pre2){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(auto it: q){
        int type = it[0], s = it[1], e = it[2];
        long long ans = 0;
        if(type == 1){
            ans = pre1[e];
            if(s > 0){
                ans -= pre1[s-1];
            }
        }else{  
            ans = pre2[e];
            if(s > 0){
                ans -= pre2[s-1];
            }
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