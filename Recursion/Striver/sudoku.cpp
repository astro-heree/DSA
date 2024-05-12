#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>>& board , int row ,int col , char c)
{
    for(int i = 0 ; i < 9 ; i++)
    {
        if(board[i][col] == c) return false;
        if(board[row][i] == c) return false;
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == c) return false;
    }
    return true;
}

bool sudoku(vector<vector<char>>& board)
{
    for(int row = 0 ; row < board.size() ; row++)
    {
        for(int col = 0 ; col < board[0].size() ; col++)
        {
            if(board[row][col] == '.')
            {
                for(char c = '1' ; c <= '9' ; c++)
                {
                    
                    if(isValid(board,row,col,c))
                    {
                        board[row][col] = c;
                        if(sudoku(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[row][col] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>>board
    {
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
    sudoku(board);
    for(int i= 0; i< 9; i++){
        for(int j= 0; j< 9; j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
    }
    return 0;
}