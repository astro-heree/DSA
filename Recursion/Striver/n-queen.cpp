#include<bits/stdc++.h>
using namespace std;
// in O(n^2)
bool safe(vector<string>& board , int row,int n , int col)
{
    //left side
    int temp_row = row;
    int temp_col = col;

    while(col>=0)
    {
        if(board[row][col] == 'Q') 
        return false;
        col--;
    }

    row = temp_row;
    col = temp_col;

    // left top diagonal;

    while(col>= 0 && row >= 0)
    {
        if(board[row][col] == 'Q')
        return false;
        row--;
        col--;
    }

    row = temp_row;
    col = temp_col;
    // left bottom diagonal

    while(col >= 0 && row < n)
    {
        if(board[row][col] == 'Q')
        return false;
        row++;
        col--;
    }
    return true;
}

void nqueen(vector<string>& board , vector<vector<string>>& ans ,int c, int n)
{
    if(c == n)
    {
        ans.push_back(board);
        return;
    }

    for(int row = 0 ; row < n ; row++)
    {
        
        if(safe(board,row,n,c))
        {
            board[row][c] = 'Q';
            nqueen(board,ans,c+1,n);
            board[row][c] = '.';
        }
    }

}

int main()
{
    int n =4;
    //cin>>n;
    vector <string> board(n);
    string s(n,'.');
    for(int i = 0 ; i < n ; i++)
    {
        board[i] = s;
    }
    vector <vector<string>> ans;
    nqueen(board,ans,0,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Iteration "<<i+1<<":"<<endl;
        for(int j = 0 ; j < n ; j++)
        {
            cout<<ans[i][j]<<endl;
        }
        //cout<<endl;
        cout<<endl;
    }

}