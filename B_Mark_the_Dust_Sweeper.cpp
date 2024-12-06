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

    int start = -1;
    long long zeroCnt = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] != 0){
            start = i;
            break;
        }
    }
    // cout<<"Start: "<<start<<endl;
    if(start == -1){
        cout<<0<<endl;
    }else{
        for(int i = start ; i < n-1 ; i++){
            if(v[i] == 0){
                zeroCnt++;
            }else{
                zeroCnt += v[i];
            }
        }
        cout<<zeroCnt<<endl;
    }

    // long long zeroCnt = 0;
    // bool otherNum = false;
    // bool lastPresent = false;
    // if(v[0] != 0){
    //     lastPresent = true;
    // }
    // int start = -1, end = n-1;
    // for(int i = 0 ; i < n ; i++){
    //     if(v[i] != 0){
    //         start = i;
    //         break;
    //     }
    // }
    // for(int i = n-2 ; i >= 0 ; i--){
    //     if(v[i] != 0){
    //         end = i;
    //         break;
    //     }
    // }
    // if(start == end) end = n-2;
    // if(start != -1){
    //     for(int i = start ; i <= end; i++){
    //         if(v[i] == 0){
    //             zeroCnt++;
    //         }
    //     }
    // }
    // for(int i = 1 ; i < n-1 ; i++){
    //     if(v[i] != 0){
    //         otherNum = true;
    //         zeroCnt+=v[i];
    //     }
    // }
    // zeroCnt += v[0];
    // if(v[0] != 0){
    //     otherNum = true;
    // }
    // // cout<<"Othernumber:" <<otherNum<<endl;
    // if(otherNum){
    //     cout<<zeroCnt<<endl;
    // }else{
    //     cout<<0<<endl;
    // }


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