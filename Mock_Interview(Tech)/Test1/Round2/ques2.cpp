// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char lp,hp;
    int n = s.length();
    string ans = "";
    int max = 0;
    int an = ans.size();
    int temp = 0;
    for(int i = 0 ; i < n; i++)
    {
        temp = i;
        for(int j = i+1 ; j < n-1 ; j++)
        {
            if(s[i] == s[j])
            {
                ans += s[i];
                i++;
            }
            else
            {
                if(an < max) 
                {
                    ans.erase(ans.begin(),ans.end());
                    i = temp;
                }
                else
                {
                    max = an;
                }
            }
        }
    }
    cout<<ans<<endl;
}