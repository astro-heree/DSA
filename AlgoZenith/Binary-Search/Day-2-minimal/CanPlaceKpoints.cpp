#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,k;
int arr[100100];

// for floor we use 
// ex - floor(a/b) => ((a+b-1)/b) + 1 
// because floor function returns the value in double/ float and we want to keep it in integer


int check(int mid){
    int needed = 0;
    for(int i = 1 ; i <= n ; i++){
        needed += (((arr[i] - arr[i-1]) + x - 1)/x) + 1
    }   
    return needed <= k;
}

signed main(){
    cin>>n>>k;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int low = 0, high = 0;
    for(int i = 1 ; i < n ; i++){
        high = max(high,arr[i]-arr[i-1]);
    }
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
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