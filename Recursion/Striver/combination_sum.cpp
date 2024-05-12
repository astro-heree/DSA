#include<bits/stdc++.h>
using namespace std;
// used to print when the sum of elements equal to the target. elements can be repeated
void combinationSum(int i , int arr[] , int n , int t , vector<int> ds)
{
    if(i >= n)
    {
        if(t == 0)
        {
            for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    
    if(arr[i] <= t)
    {
        ds.push_back(arr[i]);
        combinationSum(i,arr,n,t-arr[i],ds);
        ds.pop_back();
    }
    combinationSum(i+1,arr,n,t,ds);
    
    
}

int main()
{
    int arr[4] = {2,3,6,7};
    int size = 4;
    int index = 0;
    int target = 7;
    vector <int> ds;
    combinationSum(index,arr,size,target,ds);

}
/*
#include<bits/stdc++.h>
using namespace std;

void combinationSum(int arr[] ,int t, int n , int i , vector<int> ds,int s)
{
    if(i == n){  
    if(s == t)
    {
        for(auto it: ds)
        cout<<it<<" ";
        cout<<endl;
        
    }
    return;
    }
    if(s+arr[i] <= t)
    {
        ds.push_back(arr[i]);
        //s += arr[i];
        combinationSum(arr,t,n,i,ds,s+arr[i]);
        s -= arr[i];
        ds.pop_back();
    }
    combinationSum(arr,t,n,i+1,ds,s);

}

int main()
{
    int arr[4] = {2,3,6,7};
    int target = 7;
    int size = 4;
    int index = 0;
    vector<int> ds;
    int sum = 0;
    combinationSum(arr,target,size,index,ds,sum);
}
*/