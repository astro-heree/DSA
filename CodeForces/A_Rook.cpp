#include<bits/stdc++.h>
using namespace std;

void solveAnswer()
{
    string s;
    cin>>s;
    string temp = s;
    // cout<<s+=<<endl;
    int dig = s[1];
    // cout<<dig<<endl;
    s.pop_back();
    for(int i = 1 ; i < 9 ; i++)
    {
        if(i!=dig)
        {
            // cout<<i<<" "<<dig<<endl;
            s += to_string(i);
            if(temp != s)
            cout<<s<<endl;
            s.pop_back();
        }
    }
    s = temp;
    char f = s[0];
    // cout<<s<<endl;
    for(char ch = 'a' ; ch < 'i' ; ch++)
    {
        if(f != ch)
        {
            s[0] = ch;
            if(s != temp)
            cout<<s<<endl;
        }
    }


}

int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        solveAnswer();
    }
    return 0;
}