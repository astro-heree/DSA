#include<bits/stdc++.h>
using namespace std;

void check(int row , int col , int n , string s , vector<string>& ans , vector<vector<int>>& m , vector<vector<int>>& vis)
{
    if(row == n - 1 && col == n-1)
    {
        ans.push_back(s);
        return;
    }

    // checking down
    if(row+1 < n && m[row+1][col] == 1 && vis[row+1][col] == 0)
    {
        s += 'D';
        vis[row][col] =1;
        check(row+1,col,n,s,ans,m,vis);
        vis[row][col] = 0;
    }
    
    // checking left
    if(col-1 >= 0 && m[row][col-1] == 1 && vis[row][col-1] == 0)
    {
        s += 'L';
        vis[row][col] = 1;
        check(row,col-1,n,s,ans,m,vis);
        vis[row][col] = 0;
    }

    // checking right
    if(col + 1 < n && m[row][col+1] == 1 && vis[row][col+1] == 0)
    {
        s += 'R';
        vis[row][col] = 1; 
        check(row,col+1,n,s,ans,m,vis);
        vis[row][col] = 0;
    }

    // checking up
    if(row-1 >= 0 && m[row-1][col] == 1 && vis[row-1][col] == 0)
    {
        s += 'U';
        vis[row][col] = 1;
        check(row-1,col,n,s,ans,m,vis);
        vis[row][col] = 0;
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    vector<string> ans;
    vector<vector<int>> vis(n,vector<int> (n,0));
    string s = "";
    if(m[0][0] == 1)check(0,0,n,s,ans,m,vis);

    for(auto it: ans)
    cout<<it<<" ";
}