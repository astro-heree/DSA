#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void solveAnswer(){
    string s;
    cin>>s;
    map<char,int> m;
    for(auto it: s){
        m[it]++;
    }

    if(m.size() == 1){
        cout<<"NO"<<endl;
    }else{
        string ans = s;
        cout<<"YES"<<endl;
        int size = s.size();
        char ch = s[size-1];
        ans.insert(ans.begin(),ch);
        ans.pop_back();
        cout<<ans<<endl;
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