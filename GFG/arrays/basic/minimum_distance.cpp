#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min = INT_MAX;
    int d = INT_MIN;
    int f = -1;
    int l = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        f=i;
        if(arr[i]==y)
        l=i;
        if(f!=-1 && l!=-1)
        {
            d=abs(f-l);
            if(d<min)
            min=d;
        }
    }
    if(f==-1 || l==-1)
    cout<<-1;
    else
    cout<<min;
}