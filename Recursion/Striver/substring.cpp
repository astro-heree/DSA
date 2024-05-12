#include<bits/stdc++.h>
using namespace std;

void rec(vector<int> ans , int index , vector<int>& v , int n)
{
    //base case 
    if(index == n)
    {
        for(auto it: ans){
        cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(v[index]);
    rec(ans,index+1,v,n);
    ans.pop_back();
    rec(ans,index+1,v,n);

}

int main()
{
    vector <int> v = {3,1,2};
    vector<int> ans;
    int index = 0;
    int n = 3;
    rec(ans , index ,v,n);
}