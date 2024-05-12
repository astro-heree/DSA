#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n,m;
vector<vector<int>> g;
vector<vector<int>> vis;
vector<vector<int>> visDfs;
int dx[] = {-1,0,+1,0};
int dy[] = {0,-1,0,+1};

bool isValid(int row, int col){
    if(row >= n || row < 0 || col >= m || col < 0) return false;
    return true;
}

void dfs(int row, int col, int &size){
    g[row][col] = -1;
    size++;
    for(int dir = 0 ; dir < 4 ; dir++){
        int nRow = row + dx[dir];
        int nCol = col + dy[dir];

        if(isValid(nRow,nCol) && g[nRow][nCol] == 0){
            dfs(nRow, nCol, size);
        }
    }
    return;
}
void colorDfs(int row, int col, int size){
        if(size == 1){
            g[row][col] = 0;
            return;
        }
        g[row][col] = size;
        for(int dir = 0 ; dir < 4 ; dir++){
        int nRow = row + dx[dir];
        int nCol = col + dy[dir];
        
        if(isValid(nRow,nCol) && (g[nRow][nCol] == -1)){
            colorDfs(nRow, nCol, size);
        }
    }
    return;
}

void solveAnswer(){
    cin>>n>>m;
    g.resize(n,vector<int>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
          cin >> g[i][j];
        }
    }
    int size = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(g[i][j] == 0){
                dfs(i,j,size);
                colorDfs(i,j,size);
                size = 0;
            }
        }
    }

    for(auto it: g){
        for(auto jt: it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    g.clear();

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