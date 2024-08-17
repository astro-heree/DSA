#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 1;
    for(int i = 0 ; i <= 5; i++){
        for(int j = 0 ; j <= 5 - i ; j++){
            int newA = a + i;
            int newB = b + j;
            int newC = c + (5-i-j);
            ans = max(ans, newA*newB*newC);
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