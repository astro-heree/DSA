#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define endl "\n"

void solveAnswer(){
    string s;
    cin>>s;
    int n = s.size();
    long long sum = 0;
    int cnt2 = 0, cnt3 = 0;
    for(int i = 0 ; i < n ; i++){
        sum += (s[i] - '0');
        if(s[i] == '2') cnt2++;
        if(s[i] == '3') cnt3++;
    }
    bool flag = false;

    if(sum % 9 == 0){
        flag = true;
    }else{
        for(int i = 0 ; i <= cnt3 ; i++){

            long long temp = sum + 6*i;
            if(temp % 9 == 0){
                flag = true;
                break;
            }
            long long rem = temp % 9;
            long long div = temp / 9;
            int rem1 = (div+1)*9 - temp;
            int rem2 = (div+2)*9 - temp;
            if(rem1 % 2 == 0){
                if(cnt2 >= rem1/2){
                    flag = true;
                    break;
                }
            }
            if(rem2 % 2 == 0){
                if(cnt2 >= rem2/2){
                    flag = true;
                    break;
                }
            }
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