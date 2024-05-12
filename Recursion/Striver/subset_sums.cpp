#include<bits/stdc++.h>
using namespace std;

void subSetSum(int arr[] , int i , int n , vector<int> ds , int s, vector<int>& ans)
{
    if(i >= n)
    {
        ans.push_back(s);
        return;
    }

    ds.push_back(arr[i]);
    s = s + arr[i];
    subSetSum(arr,i+1, n,ds,s,ans);
    s = s - arr[i];
    ds.pop_back();
    subSetSum(arr,i+1, n,ds,s,ans);
}

int main()
{
    int arr[3] = {3,1,2};
    int size = 3;
    int index = 0;
    vector<int> ds;
    vector<int>ans;
    int sum = 0;
    subSetSum(arr,index,size,ds,sum,ans);    
    sort(ans.begin(),ans.end());
    for(int i = 0 ; i < ans.size() ; i++)
    {
        if(ans[i] != ans[i-1])
        {
            cout<<ans[i]<<" ";
        }
    }
}