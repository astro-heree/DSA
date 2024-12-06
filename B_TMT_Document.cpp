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
    string s;
    cin>>s;
    int cntT = 0, cntM = 0;
    for(auto it: s){
        if(it == 'T') cntT++;
        else cntM++;
    }
    // cout<<"t: "<<cntT<<" m: "<<cntM<<endl;
    if(cntT != cntM*2) cout<<"NO"<<endl;
    else{
        vector<int> pre(n,0), post(n,0);
        if(s[0] == 'T'){
            pre[0] = 1;
        }else{
            pre[0] = 0;
        }

        if(s[n-1] == 'T') {
            post[n-1] = 1;
        }else{
            post[n-1] = 0;
        }
        for(int i = 1 ; i < n ; i++){
            pre[i] = pre[i-1] + (s[i] == 'T');
        }
        for(int i = n-2 ; i >= 0 ; i--){
            post[i] = post[i+1] + (s[i] == 'T');
        }
        bool isPossible = true;
        int cnt = 0;
        // for(auto it: pre){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // for(auto it: post){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        int mCnt = 0;
        for(auto it: s){
            if(it == 'M'){
                mCnt++;
            }
        }
        for(int i = 1 ; i < n-1 ; i++){
            if(s[i] == 'M'){
                cnt++;
                int check = min(mCnt-cnt, cnt);
                if(pre[i] >= check && post[i] >= check){
                    continue;
                }else{
                    isPossible = false;
                }
            }
            if(!isPossible){
                break;
            }
        }
        if(s[0] == 'M' || s[n-1] == 'M') isPossible = false;
        if(isPossible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
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