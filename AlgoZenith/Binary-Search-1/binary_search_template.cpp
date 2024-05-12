#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100100];
int x;

// just change the check logic and it will work everytime

int check(int mid){
    if(arr[mid]<=arr[n-1]){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int lo = 0, hi=n-1, ans=-1;
    while(lo<=hi){
        int mid = (lo+hi)/2; // lo+(hi-lo)/2;
        if(check(mid)==1){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    
    cout<<ans<<endl;
}