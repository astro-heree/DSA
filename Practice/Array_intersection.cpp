#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1];
    for(int i = 0 ;  i < n1 ; i++)
    {
        cin>>arr1[i];
    }
    int arr2[n2];
    for(int i = 0 ;  i < n2 ; i++)
    {
        cin>>arr2[i];
    }

    vector <int> a;
    for(int i = 0 ; i < n1 ; i++)
    {
        for(int j = 0 ; j < n2 ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                a.push_back(arr2[j]);
                arr2[j] = -1;
            }
        }
    }

    for(int i = 0 ; i < a.size()-1 ; i++)
    {
        cout<<a[i]<<" ";
    }


}