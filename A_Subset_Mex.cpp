#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> freq(101, 0);
    int val1 = -1, val2 = -1;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    for(int i = 0 ; i < 101 ; i++){
        if(freq[i] == 0){
            val1 = i;
            break;
        }
    }
    for(int i = 0 ; i < 101 ; i++){
        if(freq[i] < 2){
            val2 = i;
            break;
        }
    }
    cout<<val1+val2<<endl;

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