#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {2,4,1,3,5};
    int n = 5;
    int max = INT_MIN;
    int sec_max = INT_MIN;
    int thi_max = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
        {
            thi_max = sec_max;
            sec_max = max;
            max = arr[i];
        }
        else if(sec_max < arr[i])
        {
            thi_max = sec_max;
            sec_max = arr[i];
        }
        else if(thi_max < arr[i]) thi_max = arr[i];
        else continue;
    }
    cout<<thi_max;
}