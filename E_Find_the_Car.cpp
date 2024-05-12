#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
#define ll long long
#define ss second
#define ff first
int MOD  = 1e9+7;

int n,k,q;
vector<int> disArr, timeArr, queries;
vector<double> speedArr;
vector<double> ans;

void solveAnswer(){
    cin>>n>>k>>q;
    int a;
    for(int i = 0 ; i < k ; i++){
        cin>>a;
        disArr.push_back(a);
    }
    for(int i = 0 ; i < k ; i++){
        cin>>a;
        timeArr.push_back(a);
    }
    for(int i = 0 ; i < q ; i++){
        cin>>a;
        queries.push_back(a);
    }
    int i = 1, j = 0;
    int dis = disArr[j];
    int time = timeArr[j];
    double speed = disArr[0]/timeArr[0];
    speedArr.push_back(speed);
    for(int i = 1 ; i < k ; i++){
        speed = disArr[i]/timeArr[i];
        speed += speedArr.back();
        speedArr.push_back(speed);
    }
    for(int i = 0 ; i < k ; i++){
        cout<<disArr[i]<<" "<<speedArr[i]<<endl;
    }
    

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