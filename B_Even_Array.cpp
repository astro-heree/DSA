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
    int times = n;
    int cnt = 1;
    while(times--){
        int space = times - 1;
        cout<<times<<" "<<space<<endl;
        while(space--){
            cout<<"A";
        }
        // int i = 0;
        // while(i<cnt){
        //     cout<<"* ";
        //     i++;
        // }
        // cnt++;
    }
}
int main() {
    fast_io();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}