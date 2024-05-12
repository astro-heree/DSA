#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int k = 0; k < size -j-1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {12, 5, 3, 6, 9};
    // 5 12 3 6 9

    int size = 5;

    cout << "Before swapping" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, size);

    cout << endl;

    cout << "After swapping" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}