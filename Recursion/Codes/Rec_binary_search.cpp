#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k)
{
    // base case
    if (s > e)
    {
        return 0;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return 1;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {1, 2, 6, 8, 99, 32};
    int size = 6;
    int key = 12;

    bool element = binarySearch(arr, 0, 5, key);

    if (element)
    {
        cout << "The element is found" << endl;
    }
    else
    {
        cout << "The element is not found" << endl;
    }
}