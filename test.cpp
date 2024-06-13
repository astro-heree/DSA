#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt = 0;
    while(n > 0){
        if(n <= 7){
            cnt += n;
            break;
        }else{
            cnt += 7;
            n--;
        }
    }
    cout<<
    return 0;
}