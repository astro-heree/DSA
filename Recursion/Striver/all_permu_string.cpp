#include<bits/stdc++.h>
using namespace std;

void all_permu_string(int* arr , int n , vector<int> ds, int freq[])
{
    if(ds.size() >= n)
    {
        for(auto it:ds)
        cout<<it<<" ";
        cout<<endl;
        return;
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        if(freq[i] != 1) // the element we have is not in the freq array (!freq)
        {
            ds.push_back(arr[i]);
            freq[i] = 1;
            all_permu_string(arr,n,ds,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    int arr[3] = {1,2,3};
    int n = 3;
    vector<int> ds;
    int freq[3] = {0};
    all_permu_string(arr,n,ds,freq);

    

}