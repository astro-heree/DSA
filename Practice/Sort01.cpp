#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int co = 0 , c1 = 0 , c2 = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 0)
        {
            co++;
        }
        else if(arr[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    for(int i = 0 ; i < co ; i++)
    {
        cout<<0<<" ";
    }
    for(int i = 0 ; i < c1 ; i++)
    {
        cout<<1<<" ";
    }
    for(int i = 0 ; i < c2 ; i++)
    {
        cout<<2<<" ";
    }


    // for(int i = 0 ; i < n ; i++) // 2 2 1 1 0 0
    // {
    //     if(arr[i] == 2)
    //     {
    //         for(int j = i+1 ; j < n ; j++)
    //         {
    //             if(arr[j] == 0)
    //             {
    //                 swap(arr[i],arr[j]);
    //             }
    //         }
    //         for(int j = i+1 ; j < n ; j++)
    //         {
    //             if(arr[j] == 1)
    //             {
    //                 swap(arr[i],arr[j]);
    //             }
    //         }
    //     }
    //     if(arr[i] == 1)
    //     {
    //         for(int j = i+1 ; j < n ; j++)
    //         {
    //             if(arr[j] == 0)
    //             {
    //                 swap(arr[i], arr[j]);
    //             }
    //         }
    //     }
    // }

    // cout<<"Printing the array: "<<endl;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
