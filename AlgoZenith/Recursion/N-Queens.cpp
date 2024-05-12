#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

vector<vector<char>> grid;

bool canPlaceQueen(int row, int col){
    //checking for *
    if(grid[row][col] == '*') return false;

    //checking for column
    for(int i = 0 ; i < 8 ; i++){
        if(grid[i][col] == 'Q') return false;
    }
    // checking for diagonals

    // right diagonal
    int startingRow = row - min(row,col);
    int startingCol = col - min(row,col);

    for(int i = 0 ; i < 8 ; i++){
        if(startingRow + i >= 8 || startingCol + i >= 8) break;

        if(grid[startingRow+i][startingCol+i] == 'Q') return false;
    }

    //left diagonal
    startingCol = row + col;
    startingRow = 0;

    for(int i = 0 ; i < 8 ; i++){
        if(startingRow + i >= 8 || startingCol - i < 0) break;

        if(grid[startingRow+i][startingCol-i] == 'Q') return false;
    }

    return true;
}

int solve(int row){
    if(row == 8){
        return 1;
    }
    int ans = 0;
    for(int currCol = 0 ; currCol < 8 ; currCol++){
        if(canPlaceQueen(row, currCol)){
            grid[row][currCol] = 'Q';
            ans += solve(row+1);
            grid[row][currCol] = '.';
        }
    }
    return ans;

}

void solveAnswer(){
    char a;
    for(int i = 0 ; i < 8 ; i++){
        vector<char> temp;
        for(int j = 0 ; j < 8 ; j++){
            cin>>a;
            temp.push_back(a);
        }
        grid.push_back(temp);
    }

    // for(auto it: grid){
    //     for(auto jt: it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }

    cout << solve(0)<<endl;


    
}
int main() {
    fast_io();
    int t = 1;
    //cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}