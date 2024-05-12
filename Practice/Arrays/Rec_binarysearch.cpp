#include<iostream>
using namespace std;

int findElementBS(int arr[], int s , int e , int k)
{

    int mid = s + (e-s)/2;
    if(e <= 0)
    {
        return 0;
    }
    if(arr[mid] == k)
    {
        return 1;
    }

    if (arr[mid] > k)
    {
        return findElementBS(arr,s, mid-1,k);
    }
    else
    {
        return findElementBS(arr, mid+1,e,k);
    }
}

int main()
{
    int e;
    cin>>e;
    int arr[e];
    for(int i = 0 ; i < e ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int s = 0;
    cout<<findElementBS(arr,s,e,k);
}