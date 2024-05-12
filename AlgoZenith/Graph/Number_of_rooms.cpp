#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;

int n,m;
vector<vector<char>> v;
vector<vector<int>> vis;
int dx[4] = {0,+1,0,-1};
int dy[4] = {-1,0,+1,0};

bool isValid(int row, int col){
    if(row < 0 || col < 0 || row >= n || col >= m) return false;
    return true;
}

void dfs(int row, int col){
    vis[row][col] = 1;
    for(int i = 0 ; i < 4 ; i++){
        int newRow = row + dx[i];
        int newCol = col + dy[i];

        if(isValid(newRow, newCol) && !vis[newRow][newCol] && v[newRow][newCol] == '.'){
            dfs(newRow, newCol);
        }
    }
    return;
}

void solveAnswer(){
    cin>>n>>m;
    char ch;
    vis.resize(n, vector<int>(m,0));
    for(int i = 0 ; i < n ; i++){
        vector<char> temp;
        for(int j = 0 ; j < m ; j++){
            cin>>ch;
            temp.push_back(ch);
        }
        v.push_back(temp);
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(!vis[i][j] && v[i][j] == '.'){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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