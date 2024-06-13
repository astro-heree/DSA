#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void solveAnswer(){
    int n;
    cin>>n;
    vector<int> v(n);
    long long ans = 0;
    long long maxi = 0;
    long long sum = 0;
    for(int i = 0 ; i < n;  i++){
        cin>>v[i];
    }
    for(int i = 0 ; i < n; i++){
        maxi = max(maxi, 1LL*v[i]);
        sum += v[i];
        if(sum - maxi == maxi){
            ans++;
        }
    }
    // map<long long, bool> m;
    // for(int i = 0 ; i < n ; i++){
    //     int ele = v[i];
    //     sum += ele;
    //     m[ele] = true;
    //     if((sum%2 == 0) && (m.find(sum/2) != m.end())){
    //         ans++;
    //     }
    // }
    cout<<ans<<endl;
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