#include<iostream>
using namespace std;

int arraySum(int arr[],int size)
{
    //base case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int remainingPart = arraySum(arr + 1 , size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int sum = arraySum(arr ,size);
    cout<<"The sum of the elements of the array is : "<<sum<<endl;
    return 0;
}