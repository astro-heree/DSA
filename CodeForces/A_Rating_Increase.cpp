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

long long getInt(string &s)
{
    long long val = 0;
    for(auto &it: s)
    {
        val = val*10 + (it - '0');
    }
    return val;
}

void solveAnswer(){
    string s;
    cin>>s;
    int n = s.size();
    string s1 = "",s2="";
    s1.push_back(s[0]);
    int j = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] == '0')
        {
            s1.push_back(s[i]);
        }
        else
        {
            j = i;
            break;
        }
    }
    for(int i = j; i < n  ; i++)
    {
        s2.push_back(s[i]);
    }
    long long a = getInt(s1);
    long long b = getInt(s2);
    if(a >= b) cout<<-1<<endl;
    else cout<<a<<" "<<b<<endl;
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