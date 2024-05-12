#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {3,5,2,1,4};
    int index = 0;
    while(index < n)
    {
        if(arr[index] == index +1) index++;
        else swap(arr[index], arr[arr[index]-1]);
    }
    for(int i = 0 ; i < n ; i++)
        cout<<arr[i]<<" ";
    
}