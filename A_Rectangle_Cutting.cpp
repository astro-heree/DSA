#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
typedef long long ll;

void solveAnswer(){
    ll x,y;
    cin>>x>>y;
    int oc = 0;
    if(x % 2 != 0){
        oc++;
    }
    if(y % 2 != 0){
        oc++;
    }
    bool check = true;
    if(oc == 2){
        check = false;
    }
    if(oc == 1){
        if(x % 2 == 0){
            if(y == x/2) check = false;
        }else{
            if(x == y/2) check = false;
        }
    }
    if(check){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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