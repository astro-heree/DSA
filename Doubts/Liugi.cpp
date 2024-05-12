//https://www.codechef.com/START64D/problems/DIVIDEMAKEEQ
#include <bits/stdc++.h>
using namespace std;

int checkSame(int arr[],int n)
{
    bool t = false;
    int min = INT_MAX,max = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    if(min = max)
    {
        t = true;
    }
    if(t)
    {
        return 1;
    }
    return 0;
}

int checkDifferent(int arr[],int n)
{
    int t = true;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            t = false;
            break;
        }
    }
    if(arr)
    {
        return 1;
    }
    return 0;
}

int checkFactors(int arr[],int n)
{
    for(int i = 0 ;  i < n ; i++)
    {
        int min = INT_MAX;
        if (arr[i]< min)
        {
            min = arr[i];
        }
    }
    int t = true;
    for(int i = 0 ;  i < n ; i++)
    {
        if(arr[i] % min != 0)
        {
            t = false;
        }
    }
    if(t)
    {
        return 1;
    }
    return 0;
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        
        if(checkSame(arr,n))
        {
            cout<<0<<endl;
        }
        else
        {
            checkDifferent(arr,n);
            if(checkDifferent(arr,n))
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<checkFactors(arr,n)<<endl;
            }
        }   
    }
	return 0;
}
