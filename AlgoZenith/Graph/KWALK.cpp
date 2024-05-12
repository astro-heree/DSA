#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
#define MP make_pair
int MOD  = 1e9+7;

int n,sx,sy,fx,fy;
// vector<vector<int>> grid;
vector<vector<int>> g;

//graph is 0 based
int dx[8] = {-2,-2,-1,+1,+2,+2,-1,+1};
int dy[8] = {-1,+1,+2,+2,-1,+1,-2,-2};

bool isValid(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= n) return false;
    return true;
}
int ans;

int bfs(int row, int col){
    queue<pair<int,int> q;
    q.push({row,col});
    g[row][col] = 0;

    while(!q.empty()){
        auto it = q.front();
        q.pop();

       
        row = it.ff;
        col = it.ss;
        if(row == fx && col == fy){
            return g[row][col];
        }
        
        for(int i = 0 ; i < 8 ; i++){
            int nRow = row + dx[i];
            int nCol = col + dy[i];
            if(isValid(nRow,nCol) && !g[nRow][nCol]){
                g[nCow][nCol] = g[row][col] + 1;
                q.push(MP(nRow,nCol));
            
            } 
        }
    }
    return -1;

}


int solveAnswer(){
    cin>>n>>sx>>sy>>fx>>fy;
    ans = 1e9;

    sx -= 1, sy -= 1, fx -= 1, fy -= 1;
     
    g.resize(n,vector<int>(n));
    g.assign(n,vector<int>(n,0));
   
    ans = bfs(sx,sy);
  
    return ans;

}
int main() {
    fast_io();
    int t = 1;
    cin>>t; 
    while(t--){
        solveAnswer();
    }
    
    return 0;
}