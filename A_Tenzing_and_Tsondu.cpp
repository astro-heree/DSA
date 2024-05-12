#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long arr[n],brr[m];
        long long tz=0,ts=0;
        for(int i = 0 ; i < n ; i++) cin>>arr[i];
        for(int i = 0 ; i < m ; i++) cin>>brr[i];
        
        for(int i = 0 ; i < n ; i++) ts += arr[i];
        for(int i = 0 ; i < m ; i++) tz += brr[i];
        
        if(ts<tz) cout<<"Tenzing"<<endl;
        else if(ts==tz) cout<<"Draw"<<endl;
        else cout<<"Tsondu"<<endl;
    }
    return 0;
}