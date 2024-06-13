#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;   

int n,m;
vector<vector<char>> v;

void solveAnswer(){
    cin>>n>>m;
    v.resize(n,vector<char>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>v[i][j];
        }
    }
    // iterating on column
    long long colCnt = 0, maxColValue = 0;
    for(int i = 0 ; i < n ; i++){
        long long tempCnt = 0;
        for(int j = 0 ; j < m ; j++){
            if(v[i][j] == '#'){
                tempCnt++;
            }
        }
        if(tempCnt > maxColValue){
            maxColValue = tempCnt;
            colCnt = i;
        }
    }

    // iterating on row
    long long rowCnt = 0, maxRowValue = 0;
    for(int i = 0 ; i < m ; i++){
        int tempCnt = 0;
        for(int j = 0 ; j < n ; j++){
            if(v[j][i] == '#'){
                tempCnt++;
            }
        }
        if(tempCnt > maxRowValue){
            maxRowValue = tempCnt;
            rowCnt = i;
        }
    }
    cout<<colCnt+1<<" "<<rowCnt+1<<endl;
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