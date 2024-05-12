#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"temp: "<<temp<<" "<<endl;
	for(int i = 1 ; i < 9 ; i++)
	{
	    string s = to_string(i);
		temp += s;
		if(i != s[1])
		{
			cout<<i<<" "<<s[1]<<endl;
			cout<<temp<<endl;
		}
		temp.pop_back();
	}
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}