#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i = 0 ; i < n-1 ; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<s<<endl;
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