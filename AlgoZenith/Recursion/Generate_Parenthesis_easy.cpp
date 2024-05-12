#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n;
vector<string> allParenthesis;

void solve(int ind, int openCnt, string s){
    if(ind == n){
        if(openCnt == 0)
            allParenthesis.push_back(s);
        return;
    }

    if(openCnt > 0){
        // can use both open and close
        s.push_back(')');
        solve(ind+1, openCnt-1, s);
        s.pop_back();
        s.push_back('(');
        solve(ind+1,openCnt+1,s);
        s.pop_back();
    }else{
        // must use open
        s.push_back('(');
        solve(ind+1,openCnt+1,s);
        s.pop_back();
    }
    return;
}

void solveAnswer(){
    cin>>n;
    solve(0,0,"");
    sort(allParenthesis.begin(),allParenthesis.end());
    for(auto it: allParenthesis){
        cout<<it<<endl;
    }
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