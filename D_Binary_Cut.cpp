#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

string s;

void solveAnswer(){
    cin>>s;
    int n = s.size();
    int ans = 1;
    bool first = false;
    for(int i = 0 ; i < n-1 ; i++){
       if(s[i] == s[i+1]){
        continue;
       }else{
        if(s[i] == '0' && s[i+1] == '1' && first == false){
            first = true;
            continue;
        }else{
            ans++;
        }
       }
    }
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