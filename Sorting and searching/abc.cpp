#include<iostream>
using namespace std;

int sumArray(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i<size;i++ )
    {
        sum = sum +arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {5,3,2,1,4};
    int size = 5;
    cout<<"The sum of the elements of the array is: "<<sumArray(arr,size);
}