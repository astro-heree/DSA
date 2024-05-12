#include<bits/stdc++.h>
using namespace std;

void check(int s[], int ind , int n)
{
    if(ind == n)
    {
        for(int j = 0 ; j < n ; j++)
        cout<<s[j]<<" ";  
        cout<<endl;
        return;
    }
    //return;

    for(int i = ind ; i < n ; i++)
    {
        swap(s[i],s[ind]);
        check(s,ind+1,n);
        swap(s[i],s[ind]);
    }
}

int main()
{
    int arr[3] = {1,2,3};
    //vector<vector<string>> ans ;
    int index = 0;
    int size = 3;
    //int size = s.length();
    check(arr,index,size);

    
}