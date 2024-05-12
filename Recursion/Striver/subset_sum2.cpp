#include<bits/stdc++.h>
using namespace std;

void subsetSum(int arr[],int ind , int n , vector<int> ds)
{
    for(auto it:ds)
    cout<<it<<" ";
    cout<<endl;
    for(int i = ind ; i < n ; i++)
    {
        if(i > ind && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        subsetSum(arr,i+1,n,ds);
        ds.pop_back();
    }
}

int main()
{
    int arr[3] = {1,2,2};
    vector<int> ds;
    sort(arr,arr+3);
    subsetSum(arr,0,3,ds);
}