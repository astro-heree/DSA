#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void solveAnswer(){
    int x,y,z;
    cin>>x>>y>>z;
    int diff = INT_MAX;
    for(int i = 0 ; i < 16 ; i++){
        int temp = abs(x-i) + abs(y-i) + abs(z-i);
        diff = min(diff,temp);
    }
    cout<<diff<<endl;
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