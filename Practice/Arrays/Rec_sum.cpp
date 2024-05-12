#include<iostream>
using namespace std;

int getSum(int arr[],int n)
{
    //base case
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return arr[0] + getSum(arr+1,n-1);
    }
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
    cout<<getSum(arr,n);
}