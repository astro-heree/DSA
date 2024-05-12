#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex] )
                minIndex = j;
        }
        // if (minIndex != i)
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[5] = {1,2,3,5,4};

    int size = 5;

    cout<<"Before swapping"<<endl;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " "; 

    cout<<endl;
    selectionSort(arr, 5);

    cout<<"After swapping"<<endl;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}