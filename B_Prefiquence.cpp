#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n, m;
string a,b;

// obs 1 - ans should be less than equal to string b;
// obs 2 - simple traversal krna h


void solveAnswer(){
    cin>>n>>m;
    cin>>a>>b;
    string ans;
    int i = 0, j = 0;
    while (i < n && j < m){
        if(a[i] == b[j]){
            i++;
        }
        j++;
    }
    cout<<i<<endl;

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