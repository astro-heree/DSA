#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int x;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    // Base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}

void solveAnswer(){
    cin>>x;
    int ans = 0, ansVal = 0;
    for(int i = 1 ; i < x ; i++){
        int fac = gcd(x,i);
        if(ans < fac+i){
            ans = fac+i;
            ansVal= i;
        }
    }
    cout<<ansVal<<endl;
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