#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;


void solveAnswer(){
    string s,t;
    cin>>s>>t;
    char ch = t[0];
    t[0] = s[0];
    s[0] = ch;
    cout<<s<<" "<<t<<endl;
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