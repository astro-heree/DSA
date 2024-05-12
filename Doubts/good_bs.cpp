#include<bits/stdc++.h>
using namespace std;

int nqueen(int& count,vector<string>& board , vector<vector<string>>& ans , int n , int col,vector<int>& l_row,vector<int>& up_diag , vector<int>& lw_diag)
{
    if(col == n)
    {
        count++;
        return count;
    }
    
    for(int row = 0 ; row < n ; row++)
    {
        if(l_row[row] == 0 && up_diag[n-1 + (col-row)] == 0 && lw_diag[row+col] == 0)
        {
            board[row][col] = 'Q';
            l_row[row] = 1;
            up_diag[n-1 + (col - row)] = 1;
            lw_diag[row+col] = 1;
            
            nqueen(count,board,ans,n,col+1,l_row,up_diag,lw_diag);

            board[row][col] = '.';
            l_row[row] = 0;
            up_diag[n-1 + (col - row)] = 0;
            lw_diag[row+col] = 0; 
        }
    }
    return count;
}

int main()
{
    int n = 4;
    vector<string> board(n);
    vector<vector<string>> ans;
    string s(n , '.');
    for(int i = 0 ;i < n ; i++)
    {
        board[i] = s;
    }
    int count = 0;
    vector<int> l_row(n , 0);
    vector<int> up_diag(2*n - 1 , 0);
    vector<int> lw_diag(2*n - 1 , 0);
    nqueen(count,board,ans,n,0,l_row , up_diag,lw_diag);
    cout<<count;

    // for(auto it : ans)
    // {
    //     cout<<"Iteration "<<":"<<endl;
    //     for(auto jt : it)
    //     {
    //         cout<<jt<<endl;
    //     }
    //     //cout<<endl;
    // }
    
}