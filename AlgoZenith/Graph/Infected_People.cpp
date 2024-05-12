#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;
#define MP make_pair
// using state = pair<int,pair<int,int>>;

int n,m;
vector<vector<int>> g;
vector<vector<int>> vis;

bool isValid(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}

void solveAnswer(){
    cin>>n>>m;
    g.resize(n,vector<int>(m));
    vis.resize(n,vector<int>(m));
    vis.assign(n,vector<int>(m,1e9));
    queue<pair<int,int>> q;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>g[i][j];
            if(g[i][j] == 2){
                q.push(MP(i,j));
                vis[i][j] = 0;
            }
        }
    }

    int dx[4] = {-1,0,+1,0};
    int dy[4] = {0,-1,0,+1};

    while(!q.empty()){
        pair<int,int> front = q.front();
        // vis[front.ff][front.ss] = 1;
        int row = front.first;
        int col = front.second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++){
            // int nRow = front.ff + dx[i];
            // int nCol = front.ss + dy[i];
            int nRow = row + dx[i];
            int nCol = col + dy[i];

            // if(isValid(nRow, nCol) && vis[front.ff][front.ss] < vis[nRow][nCol] + 1 && g[nRow][nCol] == 1){
            //     vis[front.ff][front.ss] = 1 + vis[nRow][nCol];
            //     q.push(MP(nRow,nCol));
            // }

            if(isValid(nRow,nCol) && vis[nRow][nCol] > vis[row][col] + 1 && g[nRow][nCol] == 1){
                vis[nRow][nCol] = 1 + vis[row][col];
                q.push(MP(nRow,nCol));
            }
        }
    }
    // for(auto it: vis){
    //     for(auto jt: it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    int ans = 0;
    bool everyVis = true;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            if(g[i][j] == 1 && vis[i][j] == 1e9){
                everyVis = false;
            }else if(g[i][j] == 1){
                ans = max(ans,vis[i][j]);
            }
        }
    }
    if(everyVis) cout<<ans<<endl;
    else cout<<-1<<endl;




    


    

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