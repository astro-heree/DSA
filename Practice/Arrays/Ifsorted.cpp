#include<iostream>
using namespace std;

bool ifSorted(int arr[] , int n)// 2 4 6 9 11 13
{
    // base case 
    int t = n-1;
    if(t = 0)
    return true;

    //processing
    int i = 0;
    if(arr[i] < arr[i+1])
    {
        t--;
        i++;
        ifSorted(arr,t);
    }
    else
    return false;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    cout<<ifSorted(arr,n);


    return 0;
}