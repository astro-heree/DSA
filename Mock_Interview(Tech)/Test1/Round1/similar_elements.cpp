// You are using GCC
#include<bits/stdc++.h>
using namespace std;

void findPos (vector<int> &v , int arr[] , int e , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == e) 
        v.push_back(i+1);
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    map<int,int> occ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int index = 0, track = 0;;
    for(auto it: mpp)
    {
        if(it.second > 1) 
        {
            index = it.first;
            occ[index] = it.second;
            track++;
            index = track;
        }
    }
    // for(auto it: occ) 
    // cout<<it.first<<" "<<it.second<<endl
    // if(occ.size == 0)
    // {
    //     cout<<"Similar element : "<<
    // }
    for(auto it: occ)
    {
        int ele = it.first;
        //pair<int,int> p;
        vector<int> position;
        findPos(position,arr,ele,n);
        
        cout<<"Similar element : "<<ele<<endl;
        cout<<"Positions: ";
        for(auto jt: position) cout<<jt<<" ";
        cout<<endl;
        cout<<"Occurence : "<<it.second<<endl;
    }
}