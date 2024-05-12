#include<bits/stdc++.h>
using namespace std;

void combinatationSum(int arr[] , int t , vector<int> ds , int n , int ind,int s)
{
        if(s == t)
        {
            for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
            return;
        }

    for(int i = ind ; i < n ;i++)
    {
        if(i > ind && arr[i] == arr[i-1]) continue;
        if(arr[i] > t) break;
        ds.push_back(arr[i]);
        s += arr[i];
        combinatationSum(arr,t,ds,n,i+1,s);
        s -= arr[i];
        ds.pop_back();
    }

}

int main()
{
    int arr[7] = {10,1,2,7,6,1,5};
    sort(arr,arr+7);
    int target = 8;
    vector <int> ds;
    int size = 7;
    int index = 0;
    int sum = 0;
    combinatationSum(arr,target,ds,size,index,sum);
}