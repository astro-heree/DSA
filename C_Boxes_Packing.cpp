#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

bool findIt(int ele, vector<int> &v, int n){
    int s = 0 , e = n-1;
    
    while(s<=e){
        int mid = s + (e-s)/2;
        if(v[mid] == ele){
            return true;
        }else if(v[mid] < ele){
            s = mid + 1;
        }else {
            e = mid-1;
        }
    }
    return false;
}

int getOutlierValue(vector<int> &v){
    int n = v.size();
    vector<int> pre(n);
    // pre[0] = v[0];
    long sum = 0;
    map<int,int> m;
    for(auto it: v){
        sum += it;
        m[it]++;
    }
    sort(v.begin(),v.end());
    int ans = INT_MIN;
    bool times = 0;
    for(int i = 0 ; i < n-2 ; i++){
        int left = sum - v[i];
        if(left % 2 != 0) continue;
        bool present = findIt(left/2, v, n);
        if(present){
            //check here
            if(left/2 != v[i] || (left/2 == v[i] && m[left/2] > 1)){
                cout<<"INSIDE: "<<left<<endl;
                times++;
                ans = max(ans,v[i]);
            }
        }else{
            continue;
        }
    }
    if(times < 2){
        int two = 2;
        while(two--){
            int left = sum - v[n-two];
            if(left % 2 != 0) continue;
            bool present = findIt(left/2, v, n);
            if(present){
            //check here
            if(left/2 != v[i] || (left/2 == v[i] && m[left/2] > 1)){
                cout<<"INSIDE: "<<left<<endl;
                times++;
                ans = max(ans,v[i]);
            }
            }else{
                continue;
            }
            if(times == 2) break;
        }
    }
    return ans;
    // for(int i = 1 ; i < n ; i++){
    //     pre[i] = pre[i-1] + v[i];
    // }


}

void solveAnswer(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int ans = getOutlierValue(v);
    cout<<ans<<endl;
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