// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    //cout<<s<<endl;
    int n = s.length();
    int count = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == ' ') count++;
    }
    cout<<count+1<<endl;
}