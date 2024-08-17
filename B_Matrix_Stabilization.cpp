#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
#define endl '\n'
int MOD  = 1e9+7;

bool isValid(int x, int y, int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}
int dx[4] = {-1, 0, +1, 0};
int dy[4] = {0, -1, 0, +1};
vector<vector<int>> v;

void solveAnswer(){
    int n,m;
    cin>>n>>m;
    v.assign(n,vector<int> (m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>v[i][j];
        }
    }
    
    for(int row = 0; row < n ; row++){
        for(int col = 0 ; col < m ; col++){
            int ele = v[row][col];
            vector<int> temp;
            int maxi = INT_MIN;
            bool dupli = false;
            for(int times = 0; times < 4 ; times++){
                int nRow = row + dx[times];
                int nCol = col + dy[times];
                if(isValid(nRow, nCol, n, m)){
                    if(ele == v[nRow][nCol]) dupli = true;
                    temp.push_back(v[nRow][nCol]);
                    maxi = max(maxi, v[nRow][nCol]);
                }   
            }
            sort(temp.begin(),temp.end(), greater<int>());
            maxi = temp[0];
            if(ele > maxi && !dupli){
                v[row][col] = maxi;
            }
        }
    }

    for(auto it: v){
        for(auto jt: it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    v.clear();
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