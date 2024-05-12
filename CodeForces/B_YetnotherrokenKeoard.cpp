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
bool isCapital(char ch){return ch >= 'A' && ch <= 'Z';}

void init_code(){
    fast_io();
}

void print(vector<int> &v) {
    for(auto it: v) cout<<it<<" ";
    cout<<endl;
}


void solveAnswer(){
    string s;
    cin>>s;
    string ans = "";
    int sc =0, lc = 0;
    for(int i = s.size() - 1 ; i>=0 ; i--)
    {
        if(s[i] == 'B')
        {
            lc++;
        }
        else if(s[i] == 'b')
        {
            sc++;
        }
        else
        {
            if(isCapital(s[i]))
            {
                if(lc>0)
                {
                    lc--;
                }
                else ans.push_back(s[i]);
            }
            else
            {
                if(sc > 0)
                {
                    sc--;
                }
                else ans.push_back(s[i]);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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