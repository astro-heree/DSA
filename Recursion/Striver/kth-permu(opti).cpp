#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    //cout<<"Enter N: ";
    //cin>>n;
    int k = 3;
    //cout<<"Enter K: ";
    //cin>>k;

    vector<int> ds;
    int fact = 1;
    for(int i = 1 ; i < n ; i++)
    {
        fact = fact * i;
        ds.push_back(i);
    }
    ds.push_back(n);
    k = k - 1;
    string s = "";
    while(true)
    {
        s = s + to_string(ds[k/fact]);
        ds.erase(ds.begin() + k/fact);
        if(ds.size() == 0)
        {
            break;
        }
        k = k % fact;
        fact = fact / ds.size();
    }
    cout<<s<<endl;

    return 0;
}