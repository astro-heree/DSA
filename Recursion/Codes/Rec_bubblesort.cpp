#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if(n == 0 || n == 1)
    {
        return ;
    }
    else
    {
        for(int i = 0 ; i<n-1 ;i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    bubbleSort(arr,n-1);

}


int main()
{
    int arr[5] = {1,34,3,2,22};
    int size = 5;
    
    bubbleSort(arr,size);

    for(int i = 0;i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }

}