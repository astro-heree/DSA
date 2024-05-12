#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
#define MP make_pair
int MOD  = 1e9+7;

using state = pair<int,pair<int,int>>;

int n, m;
vector<vector<char>> g;
vector<vector<int>> vis,vis2;

bool isValid(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}

void print(vector<vector<int>> v){
    for(auto it: v){
        for(auto jt: it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void solveAnswer(){
    cin>>n>>m;
    g.resize(n,vector<char>(m));
    vis.resize(n,vector<int>(m));
    vis.assign(n,vector<int>(m,1e9));
    vis2.resize(n,vector<int>(m));
    vis2.assign(n,vector<int>(m,1e9));
    queue<state> q; 
    int sx, sy;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>g[i][j];
            if(g[i][j] == 'M'){
                // state x = {0,{i,j}};
                // q.push(x);
                q.push(MP(0,MP(i,j)));
                vis[i][j] = 0;
            }
            else if(g[i][j] == 'A'){
                sx = i, sy = j;
            }
        }
    }
    int dx[4] = {-1,0,+1,0};
    int dy[4] = {0,-1,0,+1};

    while(!q.empty()){
        state it = q.front();
        q.pop();

        int dis = it.ff;
        int row = it.ss.ff;
        int col = it.ss.ss;

        for(int i = 0 ; i < 4 ; i++){
            int nRow = row + dx[i];
            int nCol = col + dy[i];

            if(isValid(nRow,nCol)){
                if(vis[nRow][nCol] > dis + 1 && g[nRow][nCol] != '#'){
                    vis[nRow][nCol] = dis + 1;
                    q.push(MP(vis[nRow][nCol],MP(nRow,nCol)));
                }
            }
        }
    }

    queue<state> que;
    que.push(MP(0,MP(sx,sy)));
    vis2[sx][sy] = 0;
    while(!que.empty()){
        state st = que.front();
        que.pop();

        int dis = st.ff;
        int row = st.ss.ff;
        int col = st.ss.ss;

        for(int i = 0 ; i < 4 ; i++){
            int nRow = row + dx[i];
            int nCol = col + dy[i];

            if(isValid(nRow,nCol) && vis[nRow][nCol] > dis+1 && vis2[nRow][nCol] > dis+1 && g[nRow][nCol] == '.'){
                vis2[nRow][nCol] = dis+1;
                que.push(MP(dis+1,MP(nRow,nCol)));
            }
        }
    }

    int ans = 1e9;
    for(int i = 0 ; i < n ; i++){
        ans = min(ans,vis2[i][0]);
        ans = min(ans,vis2[n-i-1][m-1]);
    }

    for(int j = 0; j < m ; j++){
        ans = min(ans,vis2[0][j]);
        ans = min(ans,vis2[n-1][m-j-1]);
    }

    if(ans != 1e9){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }else{
        cout<<"NO"<<endl;
    }

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