#include<bits/stdc++.h>
using namespace std;

void solve(int row,int col , vector<vector<int>>& m, int n , vector<string>& ans, string s, vector<vector<int>>& vis, int di[],int dj[])
{
    if(row == n - 1 && col == n -1)
    {
        ans.push_back(s);
        return;
    }
    string dir = "DLRU";
    for(int i = 0 ; i < n ; i++)
    {
        int nextrow = row + di[i];
        int nextcol = col + dj[i];
        if(nextrow >= 0 && nextcol >= 0 && nextrow < n && nextcol < n && m[nextrow][nextcol] == 1 && vis[nextrow][nextcol] == 0)
        {
            vis[nextrow][nextcol] = 1;
            solve(nextrow,nextcol,m,n,ans,s+dir[i],vis,di,dj);
            vis[nextrow][nextcol] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> m =
    {
        {1, 0 , 0 , 0},
        {1, 1 , 0 , 1},
        {1, 1 , 0 , 0},
        {0, 1 , 1 , 1},
    };
    int n = 4;
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int> (n,0));
    int di[] = {+1,0,0,-1};
    int dj[] = {0,-1,1,0};
    if(m[0][0] == 1) solve(0,0,m,n,ans,"",vis,di,dj);

    for(auto it: ans)
    cout<<it<<" ";
}