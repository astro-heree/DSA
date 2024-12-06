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
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    long long ans = 0;
    long long pos = 0;
    long long neg = 0;
    for(int i = 0 ; i < n ; i++){
        if(v[i] < 0){
            // cout<<"In neg: "<<endl;
            // neg
            v[i] = abs(v[i]);
            if(pos > v[i]){
                pos -= v[i];
                // do nothing
            }else{
                ans += pos - v[i];
                pos = 0;
            }
        }else{
            // pos
            pos += v[i];
        }
        // cout<<"Element: "<<v[i]<<" Ans: "<<ans<<endl;
    }
    cout<<abs(ans)<<endl;
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