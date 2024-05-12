#include<bits/stdc++.h>
using namespace std;
// prints all the subsequences in of a string
// tc => 2^n * k
void subSeq(int arr[] , int index , vector<int>& a , int n)
{
    if(index == n)
    {
        if(a.size() == 0)
        {
            cout<<"{}";
        }
            for(auto it : a)
            cout<<it<<" ";
            cout<<endl;
            return;
    }

    a.push_back(arr[index]);
    subSeq(arr,index+1,a,n);

    a.pop_back();
    subSeq(arr,index+1,a,n);
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: "<<endl;
    for(int i = 0 ; i < size ; i++) cin>>arr[i];
    int index = 0;
    int sum = 0;
    vector<int> a;
    subSeq(arr,index,a,size);
}