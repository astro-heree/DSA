#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void solveAnswer(){
    int n,r;
    cin>>n>>r;
    string s;
    cin>>s;
    map<char,int> m;
    for(auto it: s){
        m[it]++;
    }
    int cnt = 0;
    if(m['A'] > 0){
        if(m['A'] < r){
            cnt += r-m['A'];
        }
    }else{
        cnt += r;
    }
    if(m['B'] > 0){
        if(m['B'] < r){
            cnt += r-m['B'];
        }
    }else{
        cnt += r;
    }
    if(m['C'] > 0){
        if(m['C'] < r){
            cnt += r-m['C'];
        }
    }else{
        cnt += r;
    }
    if(m['D'] > 0){
        if(m['D'] < r){
            cnt += r-m['D'];
        }
    }else{
        cnt += r;
    }
    if(m['E'] > 0){
        if(m['E'] < r){
            cnt += r-m['E'];
        }
    }else{
        cnt += r;
    }
    if(m['F'] > 0){
        if(m['F'] < r){
            cnt += r-m['F'];
        }
    }else{
        cnt += r;
    }
    if(m['G'] > 0){
        if(m['G'] < r){
            cnt += r-m['G'];
        }
    }else{
        cnt += r;
    }
    cout<<cnt<<endl;
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