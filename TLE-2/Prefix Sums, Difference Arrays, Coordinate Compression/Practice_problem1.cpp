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
    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin>>v[i];
    }
    vector<int> prefix(n+1, 0), prefix2(n+1, 0);
    // prefix-> normal , prefix2 -> i*a[i];

    for(int i = 1 ; i <= n ; i++){
        prefix[i] = prefix[i-1] + v[i];
        prefix2[i] = prefix2[i-1] + ((i)*v[i]);
    }
    int q;
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        long long l,r;
        cin>>l>>r;
        long long ans = prefix2[r];
        long long temp = prefix[r];
        if(l > 0){
            ans -= prefix2[l-1];
            temp -= prefix[l-1];
            ans = ans - ((l-1)*temp);
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