#include<bits/stdc++.h>
using namespace std;
    // 1 2
    // 3 4
int doit(int row,int col,int s,int e,vector<vector<int>>&arr,int n,int m,vector<vector<int>>&vis)
{
    int maxi = -1e9, ans = 1e9;
    for(int i = -1;i <= 1;i++)
    {
        for(int j = -1;j <= 1;j++)
        {
            int nrow = row+i;
            int ncol = col+j;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
            {
                maxi = max(maxi,arr[nrow][ncol]);
            }
        }  
    }

    if(row == s && col == e) 
    {
        if(arr[row][col] < maxi)
        {
            return 1 + maxi - arr[row][col];
        }
        return 0;
    }

    //2 <= m & n <= 7 , 0 < arr[i][j] < 30;
    // vis[row][col] = 1;
    // if(row == s && col == e) return 0; //////

    // int maxi = -1e9, ans = 1e9;
    // // up
    // if(row-1 >= 0) maxi = max(maxi,arr[row-1][col]);
    // // down
    // if(row+1 < n) maxi = max(maxi,arr[row+1][col]);
    // // right
    // if(col+1 < m) maxi = max(maxi,arr[row][col+1]);
    // //left
    // if(col-1 >= 0) maxi = max(maxi,arr[row][col-1]);

    // //right up diag
    // if(row-1 >= 0 && col+1 < m) maxi = max(maxi,arr[row-1][col+1]);
    // // right bottom diag
    // if(row+1 < n && col+1 < m) maxi = max(maxi,arr[row+1][col+1]);
    // //left bottom diag
    // if(row+1 < n && col-1 >= 0) maxi = max(maxi,arr[row+1][col-1]);
    // // left up diag
    // if(row-1 >= 0 && col-1 >= 0) maxi = max(maxi,arr[row-1][col-1]);
    // 1 2
    // 3 4
    // cout<<"Maxi: "<<maxi<<endl;
    for(int i = -1;i <= 1;i++)
    {
        for(int j = -1;j <= 1;j++)
        {
            int nrow = row+i;
            int ncol = col+j;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0)
            {
                int comp = doit(nrow,ncol,s,e,arr,n,m,vis);
                ans = min(ans,comp);
                if(arr[nrow][ncol] < maxi)
                {
                    int x = 1 + maxi - arr[nrow][ncol];
                    ans = min(ans,x + comp); 
                }            
            }
        }  
    }
    vis[row][col] = 0;
    return ans;
    // 1 2
    // 3 4
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x1, y1, x2, y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    vector<vector<int>>vis(n,vector<int>(m,0));
    cout<<doit(x1-1,y1-1,x2-1,y2-1,arr,n,m,vis);
}