#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

void solveAnswer(){
    int n,f,k;
    cin>>n>>f>>k;
    vector<int> v(n);
    f--;
    // k--;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    int fav = v[f];
    bool present = false, removed = false;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // cout<<"Fav: "<<fav<<endl;
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(int i = 0 ; i < k ; i++){
        // cout<<i<<" "<<v[i]<<" "<<present<<" "<<removed<<endl;
        if(v[i] == fav){
            removed = true;
            break;
        }
    }
    // cout<<removed<<endl;
    for(int i = k ; i < n ; i++){
        if(v[i] == fav){
            present = true;
            break;
        }
    }
    // cout<<present<<endl;
    if(present && removed){
        cout<<"MAYBE"<<endl;
    }else if(removed){
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