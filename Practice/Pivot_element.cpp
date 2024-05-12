#include<iostream>
using namespace std;

int pivot(int arr[],int n,int t) // 1 2 4 5 6 7 8 -> 5 6 7 8 1 2 4 ==> 1 2 3 4 5  4 5 1 2 3
{
    int s = 0;
    int e = n -1 ;
    int ans = -1;
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] > t)
        {
            ans = mid;
            break;
        }
        else if(arr[mid] > arr[mid - 1])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
    }
    return ans;

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
    int t;
    cin>>t;

    int a = pivot(arr,n,t);
    cout<<arr[a]<<endl;
}