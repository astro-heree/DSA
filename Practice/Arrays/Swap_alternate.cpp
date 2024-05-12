#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n] ; // 2 1 4 3 5
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Swapping: "<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(n % 2 == 1)
    {
        for(int i = 0 ; i < n-1 ; i = i+2 )
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(int i  = 0 ; i < n ; i= i+2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Printing the array: "<<endl;

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }


}