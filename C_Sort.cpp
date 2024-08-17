#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

int getVal(char ch1, char ch2, map<char,int> &m1, map<char,int> &m2){
    if(m1.find(ch2) == m1.end()){
        m2[ch2]++;
    }else{
        m1[ch2]--;
        if(m1[ch2] == 0){
            m1.erase(ch2);
        }
    }
    return min((int)m1.size(),(int)m2.size());
}

void print(map<char,int> &m){
    for(auto it: m){
        cout<<it.first<<"->"<<it.second<<" ";
    }
    cout<<endl;
}

void solveAnswer(){
    int n, q;
    cin>>n>>q;
    string a,b;
    cin>>a>>b;
    vector<pair<int,int>> queries(q);
    for(int i = 0 ; i < q ; i++){
        int c,d;
        cin>>c>>d;
        c--,d--;
        queries[i] = {c,d};
    }
    map<int,int> m;
    map<char,int> m1, m2;
    for(int i = 0 ; i < n ; i++){
        int ch1 = a[i], ch2 = b[i];
        if(m2.find(ch1) != m2.end()){
            m2[ch1]--;
            if(m2[ch1] == 0){
                m2.erase(ch1);
            }
        }else{
            m1[ch1]++;
        }
        int ans = getVal(ch1, ch2, m1, m2);
        // v.push_back({i,ans});
        m[i] = ans;
        // cout<<i<<" "<<ans<<endl;
        // cout<<"Map 1:";
        // print(m1);
        // cout<<"Map 2:";
        // print(m2);
    }
    // cout<<"Map:";
    // for(auto it: m){
    //     cout<<it.first<<"->"<<it.second<<" ";
    // }
    // cout<<endl;
    // cout<<"Queries: "<<endl;
    for(int i = 0 ; i < q ; i++){
        int l = queries[i].first, r = queries[i].second;
        int ans = m[r];
        if(l>0){
            ans -= m[l-1];
        }
        cout<<abs(ans)<<endl;
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