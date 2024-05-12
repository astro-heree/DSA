#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s , int start , int end)
{
    while(start<=end)
    {
        if(s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

void partition(string s, vector<string>& part,vector<vector<string>>& ans , int index)
{
    if(index == s.size())
    {
        ans.push_back(part);
        return;
    }

    for(int i = index ; i < s.size(); i++)
    {
        if(palindrome(s,index,i))
        {
            part.push_back(s.substr(index,i-index+1));
            partition(s,part,ans,i+1);
            part.pop_back();
        }
    }
}

int main()
{
    string s = "aabb";
    vector<string> part;
    vector<vector<string>> ans;
    partition(s,part,ans,0);

    cout << "The Palindromic partitions are :-" << endl;
    cout << " [ ";
    for (auto i: ans) {
    cout << "[ ";
    for (auto j: i) {
      cout << j << " ";
    }
    cout << "] ";
  }
  cout << "]";
}