#include<iostream>
using namespace std;

int findElement(int arr[] , int n , int k)
{
    //base case
    if(n <= 0)
    {
        return 0;
    }
    if (k == arr[0])
    {
        return 1;
    }
    return findElement(arr+1,n-1,k);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // int arr[5] = {1,2,3,4,5};
    // int n = 5 , k = 4;
    cout<<findElement(arr,n,k);
}