#include<iostream>
using namespace std;

void quickSort(int *arr,int s , int e,int n)
{
    //base case
    if(n == 0 || n == 1)
    {
        return;
    }

    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[0] > arr[i])
        {
            count++;
        }
    }
    swap(arr[0],arr[count]);
    int a = 0; // 3 , 5 , 1 , 8 , 2 , 4 // 1 , 5 , 3 , 8 , 2 , 4
    for(int j = 0 ; j < n ; j++){
    for(int i = 0 ; i < count ; i++)//left part
    {
        if(arr[count] < arr[i])
        {
            a = arr[i];
        }
    }
    int b = 0;
    for(int i = e ; i > count ; i--)//right part
    {
        if(arr[count] > arr[i])
        {
            b = arr[i];
        }
    }
    swap(arr[a],arr[b]);
    }
    return quickSort(arr,s,e,n);
}

int main()
{
    int arr[6] = {3,5,1,8,2,4}; 
    quickSort(arr,0,5,6);
    cout<<"After sorting: "<<endl;
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<arr[i];
    }
}