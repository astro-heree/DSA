#include <iostream>
using namespace std;

int mountainElement(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return mid;
}

int main()
{
    int arr[5] = {1, 3, 4, 5, 2};
    int size = 5;

    int element = mountainElement(arr, 5);

    cout<<"The mountain element is" <<element;

    // cout << "The mountain element is at index " << mountainElement(arr, 5) << " which is " << arr[mountainElement(arr, 5)];
}