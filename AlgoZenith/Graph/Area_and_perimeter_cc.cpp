#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n;
vector<vector<char>> v;
vector<vector<int>> vis;
int currArea, currPeri;
int dx[4] = {-1,0,+1,0};
int dy[4] = {0,-1,0,+1};

bool isValid(int a, int b){
    if(a >= n || a < 0 || b >= n || b < 0) return false;
    return true;
}
pair<int,int> dfs(int row, int col){
    vis[row][col] = 1;
    currArea++;
    int cnt = 0;
    for(int i = 0 ; i < 4 ; i++){
        int newRow = row + dx[i];
        int newCol = col + dy[i];
        if(isValid(newRow, newCol) && v[newRow][newCol] == '#'){
            cnt++;
        }
    }
    currPeri += (4-cnt);
    for(int i = 0 ; i < 4 ; i++){
        int newRow = row + dx[i];
        int newCol = col + dy[i];
        if(isValid(newRow, newCol) && v[newRow][newCol] == '#' && !vis[newRow][newCol]){
            pair<int,int> ans = dfs(newRow,newCol);
        }
    }

    return {currArea, currPeri};

}

void solveAnswer(){
    cin>>n;
    v.assign(n,vector<char>(n));
    vis.assign(n,vector<int>(n,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>v[i][j];
        }
    }
    int maxSize = INT_MIN, peri = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(!vis[i][j] && v[i][j] == '#'){
                currArea = 0;
                currPeri = 0;
                pair<int,int> sizes = dfs(i,j);
                if(sizes.ff > maxSize){
                    maxSize = sizes.ff;
                    peri = sizes.ss;
                }else if(sizes.ff == maxSize && sizes.ss < peri){
                    peri = sizes.ss;
                }
            }
        }
    }
    cout<<maxSize<<" "<<peri<<endl;
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