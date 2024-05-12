#include<bits/stdc++.h>
using namespace std;
// #define int long long
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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void init_code(){
    fast_io();
}

string intToBinaryString(int number) {
    // Determine the number of bits needed to represent the given number
    int numBits = 0;
    int temp = number;
    while (temp > 0) {
        temp >>= 1;
        ++numBits;
    }

    // Ensure there's at least one bit for the representation
    numBits = max(numBits, 1);

    // Use bitset to get the binary representation with dynamic size
    bitset<32> binaryRepresentation(number & ((1 << numBits) - 1));

    // Convert the bitset to a string
    string binaryString = binaryRepresentation.to_string();

    // Find the first '1' character in the string (skip leading zeros)
    size_t firstOneIndex = binaryString.find('1');

    // If no '1' is found, the number is 0, so the binary string is "0"
    if (firstOneIndex == string::npos) {
        return "0";
    }

    // Return the substring starting from the first '1'
    return binaryString.substr(firstOneIndex);
}



bool check(string s, int val)
{
    if(val == 0) return 0;
    string conv = intToBinaryString(val);
    reverse(s.begin(),s.end());
    reverse(conv.begin(),conv.end());
    cout<<conv<<" "<<s<<" :";
    // if(conv.size() > s.size()) return false;
    for(int i = 0 ; i < conv.size() ; i++)
    {
        if(conv[i] == '1')
        {
            cout<<"Inside: "<<i<<" "<<s[i]<<endl;
            if(s[i] != '1')
            {
                cout<<"Breaking: "<<i<<endl;
                return false;
            }
            
        }
    }
    return true;
}

void solveAnswer(){
    int m;
    cin>>m;
    int a,b;
    vector<bool>ans;
    string s(11,'0');
    for(int i = 0 ; i < m ; i++)
    {
        cin>>a>>b;
        if(a == 1)
        {
            int ind = 11-b-1;
            while(true)
            {
                if(s[ind] == '0')
                {
                    s[ind] = '1';
                    break;
                }
                else
                {
                    ind -= 1;
                }
            }
        }
        else
        {
            bool isPos = check(s,b);
            if(isPos) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

int32_t main(){
    init_code();
    int t = 1;
    // cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}