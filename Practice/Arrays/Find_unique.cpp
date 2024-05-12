#include<bits/stdc++.h>
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
    for(int i = 0 ; i < n ; i++)   
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i] == arr[j]) 
            {
                arr[i] = -1*arr[i];
            }
        }
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;


}