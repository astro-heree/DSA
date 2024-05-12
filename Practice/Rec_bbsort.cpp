#include<iostream>
using namespace std;

void bbsort(int *arr,int n,int e)
{
    if( n == 0 || n == 1)
    {
        return;
    }
    for(int i = 0 ; i < e ; i++)
    {
        if(arr[e] < arr[i])// 4 and 0 , 4 and 1 , 4 and 2 , 4 and 3
        {
            swap(arr[e] , arr[i]);
        }
    }
    return bbsort(arr,n-1,e-1);
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
    cout<<"Before sorting: "<<endl;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // int arr[5] = {2,3,5,4,1};
    bbsort(arr,n,n-1);
    cout<<"After sorting: "<<endl;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr[i]<<" ";
    }
}