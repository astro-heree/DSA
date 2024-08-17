#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n,k;
    cin>>n>>k;
    // cout<<n<<k<<endl;
    // vector<char> c;
    vector<vector<char>> v;
    for(int i = 0 ; i < n ; i++){
        vector<char> temp;
        for(int j = 0 ; j < n ; j++){
            char ch;
            cin>>ch;
            temp.push_back(ch);
        }
        v.push_back(temp);
        // cout<<endl;
    }
    
    // for(auto it: v){
    //     for(auto jt: it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<vector<char>> ans;
    int i = 0, j = 0;
    while(i<n){
        vector<char> temp;
        // cout<<"Inside i:"<<i<<endl;
        j = 0;
        while(j<n){
            // cout<<"Inside j:"<<j<<endl;
            cout<<v[i][j];
            temp.push_back(v[i][j]);
            j+=k;
            // cout<<"New j:"<<j<<endl;
        }
        cout<<endl;
        i+=k;
        // cout<<"New i:"<<i<<endl;
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