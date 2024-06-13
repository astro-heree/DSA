#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void print(string s, map<int,int> &m){
    cout<<s;
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<endl;
}

void solveAnswer(){
    int n, m;
    cin>>n;
    int d = 0;
    vector<int> oa(n),fa(n);
    map<int,int> same, diff;
    for(int i = 0 ; i < n ; i++){
        cin>>oa[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>fa[i];
        if(fa[i] != oa[i]){
            d++;
            diff[fa[i]]++;
        }else{
            same[fa[i]]++;
        }
    }
    cin>>m;
    vector<int> replaced(m);
    for(int i = 0 ; i < m ; i++){
        cin>>replaced[i];
    }
    reverse(replaced.begin(),replaced.end());
    // cout<<"Replaced: ";
    // for(auto it: replaced){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int i = 0;
    bool ans = true;
    // print("Same: ", same);
    // print("Diff: ", diff);
    while(i < m){
        int ele = replaced[i];
        // cout<<ele<<endl;
        if(d == 0) break;
        if(diff.find(ele) != diff.end()){
            // cout<<"Present in diff:"<<endl;
            diff[ele]--;
            i++;
            d--;
        }else if(same.find(ele) != same.end()){
            // cout<<"Present in same:"<<endl;
            i++;
        }
        else{
            ans=false;
            break;
        }
    }
    // cout<<"Difference: "<<d<<endl;
    for(auto it: diff){
        if(it.second < 0){
            ans = false;
        }
    }
    if(ans && d<=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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