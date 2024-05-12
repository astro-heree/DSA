#include <iostream>
using namespace std;

int firstOcc(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int a = -1;

        if (arr[mid] == key)
        {
            a = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int lastOcc(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int a = -1;
        if (arr[mid] == key)
        {
            a = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int main()
{
    int arr[5] = {1, 2, 2, 2, 3};
    cout << "Enter the key: ";
    int key;
    cin >> key;

    int first = firstOcc(arr, 0, 4, key);
    int last = lastOcc(arr, 0, 4, key);

    int n = last - first;

    cout << "The number of key is: " << n;
}