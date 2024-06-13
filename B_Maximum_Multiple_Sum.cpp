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
    long long ans = -1;
    long long sum = 0;
    for(int i = 2 ; i <= n ; i++){
        long long tempSum = 0;
        for(int j = i ; j <= n ; j+=i){
            // cout<<" INSIDE: "<<j<<" "<<tempSum<<endl;
            tempSum = tempSum + j;
        }
        // cout<<"OUTSIDE: "<<tempSum<<" "<<sum<<endl;
        if(tempSum > sum){
            ans = i;
            sum = tempSum;
        }
        // cout<<i<<" "<<tempSum<<" "<<sum<<" "<<ans<<endl;
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