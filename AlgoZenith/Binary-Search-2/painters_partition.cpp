#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100100];
int k;

//painters problem

// int check(int mid){
//     int painters = 0, sum = 0;
//     while(i < n)
//     {
//         if(sum + arr[i] <= mid)
//         {
//             sum += arr[i];
//             i++;
//         }
//         else
//         {
//             if(sum==0) return 0;
//             painters++;
//             sum = 0;
//         }
//     }
//     return painters <= k;
// }

//better check function
int check(int t){
    int painter_spawned = 0;
    int time_left = 0;
    for(int i=0;i<n;i++){
        if(time_left >= arr[i]){
            time_left -= arr[i];
        }else{
            painter_spawned++;
            if(painter_spawned>k){
                return 0;
            }
            time_left = t;
            if(time_left>=arr[i]){
                time_left -= arr[i];
            }else{
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    cin>>n>>k;
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