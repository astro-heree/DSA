#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n;
vector<vector<char>> grid;


int dx[8] = {-1, +1, +2, +2, -1, +1, -2, -2};
int dy[8] = {-2, -2, -1, +1, +2, +2, -1, +1};

bool isValid(int x, int y){
    return x>=0 && x< n && y >= 0 && y < n;
}

bool canPlaceQueen(int row, int col){
    // for same col
    for(int i = 0 ; i < row ; i++){
        if(grid[i][col] == 'Q') return false;
    }

    // for left diagonal
    int newRow = 0;
    int newCol = row+col;
    for(int i = 0 ; i < n ; i++){
        // if(newRow + i >= n || newCol - i < 0) continue;

        if(isValid(newRow+i, newCol-i) && grid[newRow+i][newCol-i] == 'Q') return false;
    }

    // for right diagonal
    newRow = row - min(row,col);
    newCol = col - min(row,col);

    for(int i = 0 ; i < n ; i++){
        // if(newRow + i >= n || newCol + i >= n) continue;

        if(isValid(newRow+i, newCol+i) && grid[newRow+i][newCol+i] == 'Q') return false;
    }

    //checking for knight move
    for(int i = 0 ; i < 8 ; i++){
        int nRow = row + dx[i], nCol = col + dy[i];
        if(nRow >= n || nRow < 0 || nCol >= n || nCol < 0) continue;
        if(grid[nRow][nCol] == 'Q') return false;
    }
    return true;
}

long long solve(int row){
    if(row == n) {
        return 1;
    }

    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(canPlaceQueen(row,i)){
            grid[row][i] = 'Q';
            ans += solve(row+1);
            grid[row][i] = '.';
        }
    }
    return ans;
}

void solveAnswer(){
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        vector<char> temp;
        for(int j = 0 ; j < n ; j++){
            temp.push_back('.');
        }
        grid.push_back(temp);
    }

    cout<<solve(0);
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