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
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    vector<string> vk(k);
    for(int i = 0 ; i < k ; i++){
        cin>>vk[i];
    }
    for(auto it: vk){
        bool ans = true;
        string s = it;
        map<char, int> m;
        map<int, char> m2;
        if(s.size() != n){
            ans = false;
        }else{
            for(int i = 0 ; i < n ; i++){
                if(m2.find(v[i]) == m2.end()){
                    m2[v[i]] = s[i];
                }else{
                    char prev = m2[v[i]];
                    if(s[i] != prev){
                        ans = false;
                        break;
                    }
                }
                if(m.find(s[i]) == m.end()){
                    m[s[i]] = v[i];
                }
                else{
                    int prevMap = m[s[i]];
                    if(v[i] != prevMap){
                        ans = false;
                        break;
                    }
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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