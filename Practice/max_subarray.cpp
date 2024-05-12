#include<iostream>
using namespace std;

int getSum(int arr[] , int k , int n)
{
    int sum = 0;
    for(int j = 0 ; j < n ; j++)
    {
        while(k--)
        {
            sum = sum + arr[j];
        }
    }
    return sum;
}

int main()
{
    int arr[7] = {2,1,4,5,3,6,1};
    int k = 2;
    // cin>>k;
    int n = 7;
    int max = 0;
    for(int i = 0 ; i < n ; i++)
    {
       if(max < getSum(arr,k,n))
       {
            max = getSum(arr,k,n);
       }
    }
    cout<<max<<endl;
}