#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rep1(i,a,n) for(int i=a;i<=n;i++)
#define br cout << "\n";
#define pb push_back
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define all(x) x.begin(),x.end()
typedef vector<int> vi;
#define pb push_back
#define ss second
#define ff first
int mod  = 1e9+7;
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a,ll b){
    return a * b / gcd(a,b);
}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll mod) {return expo(a, mod - 2, mod);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;} //only for prime m

void init_code(){
    fast_io();
}


void solveAnswer(){
    string s;
    cin>>s;
    int zeroCnt = 0, oneCnt = 0;
    int n = s.size();
    for(auto it: s)
    {
        if(it == '0') zeroCnt++;
        else oneCnt++;
    }
    if(zeroCnt == oneCnt) cout<<0<<endl;
    else if(zeroCnt == 0 || oneCnt == 0)
    {
        cout<<n<<endl;
    }
    else
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '0')
            {
                if(oneCnt == 0) break;
                else oneCnt--;
            }
            else
            {
                if(zeroCnt == 0) break;
                else zeroCnt--;
            }
        }
        if(oneCnt == 0)
        {
            cout<<zeroCnt<<endl;
        }
        else
        {
            cout<<oneCnt<<endl;
        }
    }
}

int32_t main(){
    init_code();
    int t = 1;
    cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}