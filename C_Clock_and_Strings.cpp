#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int a,b,c,d;

void solveAnswer(){
    cin>>a>>b>>c>>d;
    bool check1 = false, check2 = false;
    while(a != b){
        if(a == c || a == d){
            check1 = true;
            break;
        }
        if(a == 12){
            a = 0;
        }
        a++;
    }
    while(b != a){
        // cout<<"B: "<<b<<endl;
        if(b == c || b == d){
            check2 = true;
            break;
        }
        if(b == 12){
            b = 0;
        }
        b++;
    }
    // cout<<check1<<" "<<check2<<endl;
    if(check1 && check2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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