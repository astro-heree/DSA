#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n, k;
vector<string> v;

void solve(int ind, int oc, string temp){
    if(ind == n){
        if(oc == 0){
            v.push_back(temp);
        }
        return;
    }

    if(oc > 0){
        // can be both open/close
        temp.push_back(('('));
        solve(ind+1, oc+1, temp);
        temp.pop_back();

        temp.push_back((')'));
        solve(ind+1, oc-1, temp);
        temp.pop_back();
    }else{
        //must be open only.
        temp.push_back(('('));
        solve(ind+1, oc+1, temp);
        temp.pop_back();
    }
}

void solveAnswer(){
    cin>>n>>k;
    solve(0,0,"");
    sort(v.begin(),v.end());
    for(auto &it: v){
        // cout<<it<<endl;
        int maxi = 0, currCnt = 0;
        for(auto jt: it){
            if(jt == '('){
                currCnt++;
            }else{
                currCnt--;
            }
            maxi = max(maxi,currCnt);
        }
        if(maxi == k) cout<<it<<endl;
    }
    return;
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