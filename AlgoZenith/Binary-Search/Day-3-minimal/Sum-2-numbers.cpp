#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

#define int long long
int n,m,k;
vector<int> arr1, arr2;

bool check(int x){
    int cnt = 0;
    if(n<m){
        for(int i = 0 ; i < n ; i++){
            int toFind = x - arr1[i];
            int index = upper_bound(arr2.begin(),arr2.end(),toFind) - arr2.begin();
            cnt += index;
        }
    }else{
        for(int i = 0 ; i < m ; i++){
            int toFind = x - arr2[i];
            int index = upper_bound(arr1.begin(),arr1.end(),toFind) - arr1.begin();
            cnt += index;
        }
    }
    return cnt >= k;
}

void solveAnswer(){
    cin>>n>>m>>k;
    arr1.resize(n);
    arr2.resize(m);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int low = arr1[0] + arr2[0];
    int high = arr1[n-1] + arr2[m-1];
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(check(mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    fast_io();
    int t = 1;
    cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}