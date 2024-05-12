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
    vector<int> arr(n-1);
    vector<int> ans;
    for(int i = 0 ; i < n - 1 ; i++){
        cin>>arr[i];
    }
    ans.push_back(arr[0] + 1);
    for(int i = 0;  i < n-1 ; i++){
        int ele = ans.back() + arr[i];
        ans.push_back(ele);
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
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