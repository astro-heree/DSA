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
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        sum+=v[i];
    }
    bool flag = true;
    if(sum % n != 0){
        flag = false;
    }else{
        vector<int> pre(n, 0), post(n, 0);
        pre[0] = v[0];
        post[n-1] = v[n-1];
        for(i = 1 ; i < n ; i++){
            pre[i] = pre[i-1] + v[i];
        }
        for(int i = n-2 ; i >= 0 ; i--){
            post[i] = post[i+1] + v[i];
        }
        int target = sum/n;
        for(int i = 1 ; i < n - 1 ; i++){
            int ls = target - v[i-1];
            int rs = target - v[i+1];
            int leftSum = 


            ]


             
            if(v[i] % )
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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