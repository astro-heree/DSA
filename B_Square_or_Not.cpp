#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

// long long binpow(long long a, long long b) {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return res * res * a;
//     else
//         return res * res;
// }

void solveAnswer(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one = 0, zero = 0;
    for(auto it: s){
        if(it == '1'){
            one++;
        }else{
            zero++;
        }
    }
    int c = sqrt(n);
    if(c*c != n){
        cout<<"No"<<endl;
    }else{
        int cnt = c + c + 2*(c-2);
        int rem = n - cnt;
        if(one == cnt && zero == rem){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
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