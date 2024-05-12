#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {11,12,13,14,15};
    int k = 1;
    int count = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        while(arr[i] > 0)
        {
            if(arr[i] %10 == k) count++;
            arr[i] = arr[i]/10;
        }
    }
    cout<<count<<endl;
}