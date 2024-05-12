#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;

    int s = 0;
    int e = n - 1;
    int ans = -1;
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == t)
        {
            ans = mid;
            e = 
            break;
        }
        else if(arr[mid] < t)
        {
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
    }
    int temp = ans;
    int lastOcc = -1,firstOcc = -1;
    // for(int i = ans ; i < n ; i++)
    // {
    //     if(arr[ans] != arr[ans + 1])
    //     {
    //         lastOcc = ans;
    //         break;
    //     }
    //     else
    //     {
    //         ans++;
    //     }
    // }
    // for(int i = temp ; i < n ; i--)
    // {
    //     if(arr[temp]  != arr[temp-1])
    //     {
    //         firstOcc = temp;
    //         break;
    //     }
    //     else 
    //     {
    //         temp--;
    //     }
    // }
    if(firstOcc == -1 || lastOcc == -1)
    {
        cout<<"The first Occ is at index: "<<-1<<endl;
        cout<<"The last Occ is at index: "<<-1<<endl;
    }
    else
    {
        cout<<"The first Occ is at index: "<<firstOcc<<endl;
        cout<<"The last Occ is at index: "<<lastOcc<<endl;
    }
}