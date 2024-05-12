//find the number of subarrays having sum as k
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int prefix[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        prefix[i]=arr[i];
        if(i)prefix[i]+=prefix[i-1];
    }
    long long ans = 0;
    map<int,int> mp;
    // sum = pref[r] - pref[l-1];
    mp[0]++; // because pref[l-1] at l=0 is -1 whose val is 0;
    for(int r=0;r<n;r++){
        ans+=mp[pre[r]-x];
        mp[pre[r]]++;
    }
    cout<<ans<<endl;
}