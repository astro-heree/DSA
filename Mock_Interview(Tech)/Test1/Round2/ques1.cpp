// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int max = 0,min = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int temp = m;
        for(int i = 0 ; i < n ; i++)
        {
            if(temp > 0)
            {
                min += arr[i];
                temp--;
            }
        }
        for(int i = n-1 ; i > 0 ; i--)
        {
            if(m>0)
            {
                max += arr[i];
                m--;
            }
        }
        cout<<max-min<<endl;
    }
}