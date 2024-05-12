#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    //while(s.length()>0)
    int n = s.length();
    for(int i = 0 ; i < n ; i++)
    {
        st.push(s[i]);
    }
    string ans = "";
    while(st.empty() == false)
    {
        ans.push_back(st.top());
        st.pop();
    } 
    cout<<ans<<endl;
}