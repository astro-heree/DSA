#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

int findIt(vector<int> &v, int ele){
    int s = 0, e = v.size() - 1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(v[mid] < ele){
            s = mid + 1;
        } else if(v[mid] > ele){
            ans = mid;
            e = mid - 1;
        }
    }
    return ans;
}

int solve(string &s){
    int n = s.size();
    int fc = s[0];
    int lc = s[n-1];
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == lc){
            v.push_back(i);
        }
    }
    int ans = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(i > v.back()){
            break;
        }
        if(s[i] == fc){
            int idx = findIt(v, i);
            if(idx != -1){
                ans = max(ans, n - (v[idx] - i + 1));
            }
        }

    }
    return ans;

}

void solveAnswer(){
    string s;
    cin>>s;
    int ans = solve(s);
    cout<<ans<<endl;
}
int main() {
    fast_io();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}