#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int tz=0,ts=0;
        for(int i = 0 ; i < n ; i++)
        {
            int a;cin>>a;ts += a;
        }
        for(int i = 0 ; i < m ; i++)
        {
            int a;cin>>a;tz+=a;
        }
        if(ts>tz) cout<<"Tenzing"<<endl;
        else if(ts==tz) cout<<"Draw"<<endl;
        else cout<<"Tsondu"<<endl;
    }
	
}

